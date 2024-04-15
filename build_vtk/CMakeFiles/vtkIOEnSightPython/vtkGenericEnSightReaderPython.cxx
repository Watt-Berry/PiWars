// python wrapper for vtkGenericEnSightReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenericEnSightReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericEnSightReader(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyEnsightReaderCellIdMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOEnSight.EnsightReaderCellIdMode", // tp_name
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
PyObject *PyEnsightReaderCellIdMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyEnsightReaderCellIdMode_Type, static_cast<int>(val));
}

extern "C" { PyObject *PyvtkGenericEnSightReader_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericEnSightReader_FileTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOEnSight.vtkGenericEnSightReader.FileTypes", // tp_name
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
PyObject *PyvtkGenericEnSightReader_FileTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGenericEnSightReader_FileTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkGenericEnSightReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericEnSightReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericEnSightReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericEnSightReader *tempr = vtkGenericEnSightReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericEnSightReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericEnSightReader::NewInstance());

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
PyvtkGenericEnSightReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenericEnSightReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenericEnSightReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaseFileName(temp0);
    }
    else
    {
      op->vtkGenericEnSightReader::SetCaseFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCaseFileName() :
      op->vtkGenericEnSightReader::GetCaseFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePath(temp0);
    }
    else
    {
      op->vtkGenericEnSightReader::SetFilePath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePath() :
      op->vtkGenericEnSightReader::GetFilePath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetEnSightVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnSightVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnSightVersion() :
      op->vtkGenericEnSightReader::GetEnSightVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVariables_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariables() :
      op->vtkGenericEnSightReader::GetNumberOfVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVariables_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariables(temp0) :
      op->vtkGenericEnSightReader::GetNumberOfVariables(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVariables(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGenericEnSightReader_GetNumberOfVariables_s1(self, args);
    case 1:
      return PyvtkGenericEnSightReader_GetNumberOfVariables_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfVariables");
  return nullptr;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexVariables() :
      op->vtkGenericEnSightReader::GetNumberOfComplexVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfScalarsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarsPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfScalarsPerNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVectorsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorsPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfVectorsPerNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfTensorsAsymPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsAsymPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTensorsAsymPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfTensorsAsymPerNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsSymmPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTensorsSymmPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfTensorsSymmPerNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfScalarsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarsPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfScalarsPerElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVectorsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorsPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfVectorsPerElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfTensorsAsymPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsAsymPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTensorsAsymPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfTensorsAsymPerElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsSymmPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTensorsSymmPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfTensorsSymmPerElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfScalarsPerMeasuredNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsPerMeasuredNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarsPerMeasuredNode() :
      op->vtkGenericEnSightReader::GetNumberOfScalarsPerMeasuredNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVectorsPerMeasuredNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsPerMeasuredNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorsPerMeasuredNode() :
      op->vtkGenericEnSightReader::GetNumberOfVectorsPerMeasuredNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexScalarsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexScalarsPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfComplexScalarsPerNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexVectorsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexVectorsPerNode() :
      op->vtkGenericEnSightReader::GetNumberOfComplexVectorsPerNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexScalarsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexScalarsPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfComplexScalarsPerElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexVectorsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComplexVectorsPerElement() :
      op->vtkGenericEnSightReader::GetNumberOfComplexVectorsPerElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetDescription_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription(temp0) :
      op->vtkGenericEnSightReader::GetDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetDescription_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription(temp0, temp1) :
      op->vtkGenericEnSightReader::GetDescription(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetDescription(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkGenericEnSightReader_GetDescription_s1(self, args);
    case 2:
      return PyvtkGenericEnSightReader_GetDescription_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDescription");
  return nullptr;
}


static PyObject *
PyvtkGenericEnSightReader_GetComplexDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComplexDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetComplexDescription(temp0) :
      op->vtkGenericEnSightReader::GetComplexDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetVariableType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVariableType(temp0) :
      op->vtkGenericEnSightReader::GetVariableType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetComplexVariableType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComplexVariableType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComplexVariableType(temp0) :
      op->vtkGenericEnSightReader::GetComplexVariableType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeValue(temp0);
    }
    else
    {
      op->vtkGenericEnSightReader::SetTimeValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetTimeValue() :
      op->vtkGenericEnSightReader::GetTimeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetMinimumTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumTimeValue() :
      op->vtkGenericEnSightReader::GetMinimumTimeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetMaximumTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumTimeValue() :
      op->vtkGenericEnSightReader::GetMaximumTimeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetTimeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArrayCollection *tempr = (ap.IsBound() ?
      op->GetTimeSets() :
      op->vtkGenericEnSightReader::GetTimeSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_DetermineEnSightVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetermineEnSightVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->DetermineEnSightVersion(temp0) :
      op->vtkGenericEnSightReader::DetermineEnSightVersion(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ReadAllVariablesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVariablesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllVariablesOn();
    }
    else
    {
      op->vtkGenericEnSightReader::ReadAllVariablesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ReadAllVariablesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVariablesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllVariablesOff();
    }
    else
    {
      op->vtkGenericEnSightReader::ReadAllVariablesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetReadAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllVariables(temp0);
    }
    else
    {
      op->vtkGenericEnSightReader::SetReadAllVariables(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetReadAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllVariables() :
      op->vtkGenericEnSightReader::GetReadAllVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkGenericEnSightReader::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkGenericEnSightReader::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkGenericEnSightReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkGenericEnSightReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkGenericEnSightReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkGenericEnSightReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkGenericEnSightReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkGenericEnSightReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkGenericEnSightReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkGenericEnSightReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToBigEndian();
    }
    else
    {
      op->vtkGenericEnSightReader::SetByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToLittleEndian();
    }
    else
    {
      op->vtkGenericEnSightReader::SetByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      op->vtkGenericEnSightReader::SetByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkGenericEnSightReader::GetByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetByteOrderAsString() :
      op->vtkGenericEnSightReader::GetByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryFileName() :
      op->vtkGenericEnSightReader::GetGeometryFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParticleCoordinatesByIndex(temp0);
    }
    else
    {
      op->vtkGenericEnSightReader::SetParticleCoordinatesByIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParticleCoordinatesByIndex() :
      op->vtkGenericEnSightReader::GetParticleCoordinatesByIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParticleCoordinatesByIndexOn();
    }
    else
    {
      op->vtkGenericEnSightReader::ParticleCoordinatesByIndexOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParticleCoordinatesByIndexOff();
    }
    else
    {
      op->vtkGenericEnSightReader::ParticleCoordinatesByIndexOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_IsEnSightFile(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsEnSightFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    bool tempr = vtkGenericEnSightReader::IsEnSightFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkGenericEnSightReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericEnSightReader *tempr = (ap.IsBound() ?
      op->GetReader() :
      op->vtkGenericEnSightReader::GetReader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetApplyTetrahedralize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplyTetrahedralize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetApplyTetrahedralize() :
      op->vtkGenericEnSightReader::GetApplyTetrahedralize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetApplyTetrahedralize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplyTetrahedralize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetApplyTetrahedralize(temp0);
    }
    else
    {
      op->vtkGenericEnSightReader::SetApplyTetrahedralize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericEnSightReader_Methods[] = {
  {"IsTypeOf", PyvtkGenericEnSightReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericEnSightReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericEnSightReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenericEnSightReader\nC++: static vtkGenericEnSightReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericEnSightReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenericEnSightReader\nC++: vtkGenericEnSightReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenericEnSightReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenericEnSightReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCaseFileName", PyvtkGenericEnSightReader_SetCaseFileName, METH_VARARGS,
   "SetCaseFileName(self, fileName:str) -> None\nC++: void SetCaseFileName(const char *fileName)\n\nSet/Get the Case file name.\n"},
  {"GetCaseFileName", PyvtkGenericEnSightReader_GetCaseFileName, METH_VARARGS,
   "GetCaseFileName(self) -> str\nC++: virtual char *GetCaseFileName()\n\n"},
  {"SetFilePath", PyvtkGenericEnSightReader_SetFilePath, METH_VARARGS,
   "SetFilePath(self, _arg:str) -> None\nC++: virtual void SetFilePath(const char *_arg)\n\nSet/Get the file path.\n"},
  {"GetFilePath", PyvtkGenericEnSightReader_GetFilePath, METH_VARARGS,
   "GetFilePath(self) -> str\nC++: virtual char *GetFilePath()\n\n"},
  {"GetEnSightVersion", PyvtkGenericEnSightReader_GetEnSightVersion, METH_VARARGS,
   "GetEnSightVersion(self) -> int\nC++: virtual int GetEnSightVersion()\n\nGet the EnSight file version being read.\n"},
  {"GetNumberOfVariables", PyvtkGenericEnSightReader_GetNumberOfVariables, METH_VARARGS,
   "GetNumberOfVariables(self) -> int\nC++: virtual int GetNumberOfVariables()\nGetNumberOfVariables(self, type:int) -> int\nC++: int GetNumberOfVariables(int type)\n\nGet the number of variables listed in the case file.\n"},
  {"GetNumberOfComplexVariables", PyvtkGenericEnSightReader_GetNumberOfComplexVariables, METH_VARARGS,
   "GetNumberOfComplexVariables(self) -> int\nC++: virtual int GetNumberOfComplexVariables()\n\n"},
  {"GetNumberOfScalarsPerNode", PyvtkGenericEnSightReader_GetNumberOfScalarsPerNode, METH_VARARGS,
   "GetNumberOfScalarsPerNode(self) -> int\nC++: virtual int GetNumberOfScalarsPerNode()\n\n"},
  {"GetNumberOfVectorsPerNode", PyvtkGenericEnSightReader_GetNumberOfVectorsPerNode, METH_VARARGS,
   "GetNumberOfVectorsPerNode(self) -> int\nC++: virtual int GetNumberOfVectorsPerNode()\n\n"},
  {"GetNumberOfTensorsAsymPerNode", PyvtkGenericEnSightReader_GetNumberOfTensorsAsymPerNode, METH_VARARGS,
   "GetNumberOfTensorsAsymPerNode(self) -> int\nC++: virtual int GetNumberOfTensorsAsymPerNode()\n\n"},
  {"GetNumberOfTensorsSymmPerNode", PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerNode, METH_VARARGS,
   "GetNumberOfTensorsSymmPerNode(self) -> int\nC++: virtual int GetNumberOfTensorsSymmPerNode()\n\n"},
  {"GetNumberOfScalarsPerElement", PyvtkGenericEnSightReader_GetNumberOfScalarsPerElement, METH_VARARGS,
   "GetNumberOfScalarsPerElement(self) -> int\nC++: virtual int GetNumberOfScalarsPerElement()\n\n"},
  {"GetNumberOfVectorsPerElement", PyvtkGenericEnSightReader_GetNumberOfVectorsPerElement, METH_VARARGS,
   "GetNumberOfVectorsPerElement(self) -> int\nC++: virtual int GetNumberOfVectorsPerElement()\n\n"},
  {"GetNumberOfTensorsAsymPerElement", PyvtkGenericEnSightReader_GetNumberOfTensorsAsymPerElement, METH_VARARGS,
   "GetNumberOfTensorsAsymPerElement(self) -> int\nC++: virtual int GetNumberOfTensorsAsymPerElement()\n\n"},
  {"GetNumberOfTensorsSymmPerElement", PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerElement, METH_VARARGS,
   "GetNumberOfTensorsSymmPerElement(self) -> int\nC++: virtual int GetNumberOfTensorsSymmPerElement()\n\n"},
  {"GetNumberOfScalarsPerMeasuredNode", PyvtkGenericEnSightReader_GetNumberOfScalarsPerMeasuredNode, METH_VARARGS,
   "GetNumberOfScalarsPerMeasuredNode(self) -> int\nC++: virtual int GetNumberOfScalarsPerMeasuredNode()\n\n"},
  {"GetNumberOfVectorsPerMeasuredNode", PyvtkGenericEnSightReader_GetNumberOfVectorsPerMeasuredNode, METH_VARARGS,
   "GetNumberOfVectorsPerMeasuredNode(self) -> int\nC++: virtual int GetNumberOfVectorsPerMeasuredNode()\n\n"},
  {"GetNumberOfComplexScalarsPerNode", PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerNode, METH_VARARGS,
   "GetNumberOfComplexScalarsPerNode(self) -> int\nC++: virtual int GetNumberOfComplexScalarsPerNode()\n\n"},
  {"GetNumberOfComplexVectorsPerNode", PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerNode, METH_VARARGS,
   "GetNumberOfComplexVectorsPerNode(self) -> int\nC++: virtual int GetNumberOfComplexVectorsPerNode()\n\n"},
  {"GetNumberOfComplexScalarsPerElement", PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerElement, METH_VARARGS,
   "GetNumberOfComplexScalarsPerElement(self) -> int\nC++: virtual int GetNumberOfComplexScalarsPerElement()\n\n"},
  {"GetNumberOfComplexVectorsPerElement", PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerElement, METH_VARARGS,
   "GetNumberOfComplexVectorsPerElement(self) -> int\nC++: virtual int GetNumberOfComplexVectorsPerElement()\n\n"},
  {"GetDescription", PyvtkGenericEnSightReader_GetDescription, METH_VARARGS,
   "GetDescription(self, n:int) -> str\nC++: const char *GetDescription(int n)\nGetDescription(self, n:int, type:int) -> str\nC++: const char *GetDescription(int n, int type)\n\nGet the nth description for a non-complex variable.\n"},
  {"GetComplexDescription", PyvtkGenericEnSightReader_GetComplexDescription, METH_VARARGS,
   "GetComplexDescription(self, n:int) -> str\nC++: const char *GetComplexDescription(int n)\n\nGet the nth description for a complex variable.\n"},
  {"GetVariableType", PyvtkGenericEnSightReader_GetVariableType, METH_VARARGS,
   "GetVariableType(self, n:int) -> int\nC++: int GetVariableType(int n)\n\nGet the variable type of variable n.\n"},
  {"GetComplexVariableType", PyvtkGenericEnSightReader_GetComplexVariableType, METH_VARARGS,
   "GetComplexVariableType(self, n:int) -> int\nC++: int GetComplexVariableType(int n)\n\n"},
  {"SetTimeValue", PyvtkGenericEnSightReader_SetTimeValue, METH_VARARGS,
   "SetTimeValue(self, value:float) -> None\nC++: virtual void SetTimeValue(float value)\n\nSet/Get the time value at which to get the value.\n"},
  {"GetTimeValue", PyvtkGenericEnSightReader_GetTimeValue, METH_VARARGS,
   "GetTimeValue(self) -> float\nC++: virtual float GetTimeValue()\n\n"},
  {"GetMinimumTimeValue", PyvtkGenericEnSightReader_GetMinimumTimeValue, METH_VARARGS,
   "GetMinimumTimeValue(self) -> float\nC++: virtual float GetMinimumTimeValue()\n\nGet the minimum or maximum time value for this data set.\n"},
  {"GetMaximumTimeValue", PyvtkGenericEnSightReader_GetMaximumTimeValue, METH_VARARGS,
   "GetMaximumTimeValue(self) -> float\nC++: virtual float GetMaximumTimeValue()\n\n"},
  {"GetTimeSets", PyvtkGenericEnSightReader_GetTimeSets, METH_VARARGS,
   "GetTimeSets(self) -> vtkDataArrayCollection\nC++: virtual vtkDataArrayCollection *GetTimeSets()\n\nGet the time values per time set\n"},
  {"DetermineEnSightVersion", PyvtkGenericEnSightReader_DetermineEnSightVersion, METH_VARARGS,
   "DetermineEnSightVersion(self, quiet:int=0) -> int\nC++: int DetermineEnSightVersion(int quiet=0)\n\nReads the FORMAT part of the case file to determine whether this\nis an EnSight6 or EnSightGold data set.  Returns an identifier\nlisted in the FileTypes enum or -1 if an error occurred or the\nfile could not be identified as any EnSight type.\n"},
  {"ReadAllVariablesOn", PyvtkGenericEnSightReader_ReadAllVariablesOn, METH_VARARGS,
   "ReadAllVariablesOn(self) -> None\nC++: virtual void ReadAllVariablesOn()\n\nSet/get the flag for whether to read all the variables\n"},
  {"ReadAllVariablesOff", PyvtkGenericEnSightReader_ReadAllVariablesOff, METH_VARARGS,
   "ReadAllVariablesOff(self) -> None\nC++: virtual void ReadAllVariablesOff()\n\n"},
  {"SetReadAllVariables", PyvtkGenericEnSightReader_SetReadAllVariables, METH_VARARGS,
   "SetReadAllVariables(self, _arg:int) -> None\nC++: virtual void SetReadAllVariables(vtkTypeBool _arg)\n\n"},
  {"GetReadAllVariables", PyvtkGenericEnSightReader_GetReadAllVariables, METH_VARARGS,
   "GetReadAllVariables(self) -> int\nC++: virtual vtkTypeBool GetReadAllVariables()\n\n"},
  {"GetPointDataArraySelection", PyvtkGenericEnSightReader_GetPointDataArraySelection, METH_VARARGS,
   "GetPointDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetPointDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {"GetCellDataArraySelection", PyvtkGenericEnSightReader_GetCellDataArraySelection, METH_VARARGS,
   "GetCellDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetCellDataArraySelection()\n\n"},
  {"GetNumberOfPointArrays", PyvtkGenericEnSightReader_GetNumberOfPointArrays, METH_VARARGS,
   "GetNumberOfPointArrays(self) -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {"GetNumberOfCellArrays", PyvtkGenericEnSightReader_GetNumberOfCellArrays, METH_VARARGS,
   "GetNumberOfCellArrays(self) -> int\nC++: int GetNumberOfCellArrays()\n\n"},
  {"GetPointArrayName", PyvtkGenericEnSightReader_GetPointArrayName, METH_VARARGS,
   "GetPointArrayName(self, index:int) -> str\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {"GetCellArrayName", PyvtkGenericEnSightReader_GetCellArrayName, METH_VARARGS,
   "GetCellArrayName(self, index:int) -> str\nC++: const char *GetCellArrayName(int index)\n\n"},
  {"GetPointArrayStatus", PyvtkGenericEnSightReader_GetPointArrayStatus, METH_VARARGS,
   "GetPointArrayStatus(self, name:str) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {"GetCellArrayStatus", PyvtkGenericEnSightReader_GetCellArrayStatus, METH_VARARGS,
   "GetCellArrayStatus(self, name:str) -> int\nC++: int GetCellArrayStatus(const char *name)\n\n"},
  {"SetPointArrayStatus", PyvtkGenericEnSightReader_SetPointArrayStatus, METH_VARARGS,
   "SetPointArrayStatus(self, name:str, status:int) -> None\nC++: void SetPointArrayStatus(const char *name, int status)\n\n"},
  {"SetCellArrayStatus", PyvtkGenericEnSightReader_SetCellArrayStatus, METH_VARARGS,
   "SetCellArrayStatus(self, name:str, status:int) -> None\nC++: void SetCellArrayStatus(const char *name, int status)\n\n"},
  {"SetByteOrderToBigEndian", PyvtkGenericEnSightReader_SetByteOrderToBigEndian, METH_VARARGS,
   "SetByteOrderToBigEndian(self) -> None\nC++: void SetByteOrderToBigEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {"SetByteOrderToLittleEndian", PyvtkGenericEnSightReader_SetByteOrderToLittleEndian, METH_VARARGS,
   "SetByteOrderToLittleEndian(self) -> None\nC++: void SetByteOrderToLittleEndian()\n\n"},
  {"SetByteOrder", PyvtkGenericEnSightReader_SetByteOrder, METH_VARARGS,
   "SetByteOrder(self, _arg:int) -> None\nC++: virtual void SetByteOrder(int _arg)\n\n"},
  {"GetByteOrder", PyvtkGenericEnSightReader_GetByteOrder, METH_VARARGS,
   "GetByteOrder(self) -> int\nC++: virtual int GetByteOrder()\n\n"},
  {"GetByteOrderAsString", PyvtkGenericEnSightReader_GetByteOrderAsString, METH_VARARGS,
   "GetByteOrderAsString(self) -> str\nC++: const char *GetByteOrderAsString()\n\n"},
  {"GetGeometryFileName", PyvtkGenericEnSightReader_GetGeometryFileName, METH_VARARGS,
   "GetGeometryFileName(self) -> str\nC++: virtual char *GetGeometryFileName()\n\nGet the Geometry file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {"SetParticleCoordinatesByIndex", PyvtkGenericEnSightReader_SetParticleCoordinatesByIndex, METH_VARARGS,
   "SetParticleCoordinatesByIndex(self, _arg:int) -> None\nC++: virtual void SetParticleCoordinatesByIndex(vtkTypeBool _arg)\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of the point.\nWarning, if the Points are listed in non sequential order then\nsetting this flag will reorder them.\n"},
  {"GetParticleCoordinatesByIndex", PyvtkGenericEnSightReader_GetParticleCoordinatesByIndex, METH_VARARGS,
   "GetParticleCoordinatesByIndex(self) -> int\nC++: virtual vtkTypeBool GetParticleCoordinatesByIndex()\n\n"},
  {"ParticleCoordinatesByIndexOn", PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOn, METH_VARARGS,
   "ParticleCoordinatesByIndexOn(self) -> None\nC++: virtual void ParticleCoordinatesByIndexOn()\n\n"},
  {"ParticleCoordinatesByIndexOff", PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOff, METH_VARARGS,
   "ParticleCoordinatesByIndexOff(self) -> None\nC++: virtual void ParticleCoordinatesByIndexOff()\n\n"},
  {"IsEnSightFile", PyvtkGenericEnSightReader_IsEnSightFile, METH_VARARGS,
   "IsEnSightFile(casefilename:str) -> bool\nC++: static bool IsEnSightFile(const char *casefilename)\n\nReturns true if the file pointed to by casefilename appears to be\na valid EnSight case file.\n"},
  {"CanReadFile", PyvtkGenericEnSightReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, casefilename:str) -> int\nC++: virtual int CanReadFile(const char *casefilename)\n\nReturns IsEnSightFile() by default, but can be overridden\n"},
  {"GetReader", PyvtkGenericEnSightReader_GetReader, METH_VARARGS,
   "GetReader(self) -> vtkGenericEnSightReader\nC++: vtkGenericEnSightReader *GetReader()\n\n"},
  {"GetApplyTetrahedralize", PyvtkGenericEnSightReader_GetApplyTetrahedralize, METH_VARARGS,
   "GetApplyTetrahedralize(self) -> bool\nC++: virtual bool GetApplyTetrahedralize()\n\nGet/set to ApplyTetrahedralize. It's used to apply a\nTetrahedralize filter to prevent potential non manifold triangles\nproduced by the ensight solver.\n"},
  {"SetApplyTetrahedralize", PyvtkGenericEnSightReader_SetApplyTetrahedralize, METH_VARARGS,
   "SetApplyTetrahedralize(self, _arg:bool) -> None\nC++: virtual void SetApplyTetrahedralize(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGenericEnSightReader_Doc =
  "vtkGenericEnSightReader - class to read any type of EnSight files\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "The class vtkGenericEnSightReader allows the user to read an EnSight\n"
  "data set without a priori knowledge of what type of EnSight data set\n"
  "it is.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericEnSightReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOEnSight.vtkGenericEnSightReader", // tp_name
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
  PyvtkGenericEnSightReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericEnSightReader_StaticNew()
{
  return vtkGenericEnSightReader::New();
}

PyObject *PyvtkGenericEnSightReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenericEnSightReader_Type, PyvtkGenericEnSightReader_Methods,
    "vtkGenericEnSightReader",
 &PyvtkGenericEnSightReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGenericEnSightReader_FileTypes_Type);
  PyVTKEnum_Add(&PyvtkGenericEnSightReader_FileTypes_Type, "vtkGenericEnSightReader.FileTypes");

  o = (PyObject *)&PyvtkGenericEnSightReader_FileTypes_Type;
  if (PyDict_SetItemString(d, "FileTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkGenericEnSightReader::FileTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "ENSIGHT_6", vtkGenericEnSightReader::ENSIGHT_6 },
        { "ENSIGHT_6_BINARY", vtkGenericEnSightReader::ENSIGHT_6_BINARY },
        { "ENSIGHT_GOLD", vtkGenericEnSightReader::ENSIGHT_GOLD },
        { "ENSIGHT_GOLD_BINARY", vtkGenericEnSightReader::ENSIGHT_GOLD_BINARY },
        { "ENSIGHT_MASTER_SERVER", vtkGenericEnSightReader::ENSIGHT_MASTER_SERVER },
      };

    o = PyvtkGenericEnSightReader_FileTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "FILE_BIG_ENDIAN", vtkGenericEnSightReader::FILE_BIG_ENDIAN },
        { "FILE_LITTLE_ENDIAN", vtkGenericEnSightReader::FILE_LITTLE_ENDIAN },
        { "FILE_UNKNOWN_ENDIAN", vtkGenericEnSightReader::FILE_UNKNOWN_ENDIAN },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericEnSightReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericEnSightReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericEnSightReader", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyEnsightReaderCellIdMode_Type);
  PyVTKEnum_Add(&PyEnsightReaderCellIdMode_Type, "EnsightReaderCellIdMode");

  o = (PyObject *)&PyEnsightReaderCellIdMode_Type;
  if (PyDict_SetItemString(dict, "EnsightReaderCellIdMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; EnsightReaderCellIdMode value; }
      constants[4] = {
        { "SINGLE_PROCESS_MODE", SINGLE_PROCESS_MODE },
        { "SPARSE_MODE", SPARSE_MODE },
        { "NON_SPARSE_MODE", NON_SPARSE_MODE },
        { "IMPLICIT_STRUCTURED_MODE", IMPLICIT_STRUCTURED_MODE },
      };

    o = PyEnsightReaderCellIdMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

