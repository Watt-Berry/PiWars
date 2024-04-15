// python wrapper for vtkCGNSReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCGNSReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCGNSReader(PyObject *dict); }
extern "C" { PyObject *PyvtkCGNSReader_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCGNSReader_DataArrayLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCGNSReader.vtkCGNSReader.DataArrayLocation", // tp_name
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
PyObject *PyvtkCGNSReader_DataArrayLocation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCGNSReader_DataArrayLocation_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCGNSReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCGNSReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCGNSReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCGNSReader *tempr = vtkCGNSReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCGNSReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCGNSReader::NewInstance());

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
PyvtkCGNSReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCGNSReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCGNSReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetDataLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataLocation(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetDataLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetDataLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataLocationMinValue() :
      op->vtkCGNSReader::GetDataLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetDataLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataLocationMaxValue() :
      op->vtkCGNSReader::GetDataLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetDataLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataLocation() :
      op->vtkCGNSReader::GetDataLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

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
      op->vtkCGNSReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCGNSReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkCGNSReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetBaseSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetBaseSelection() :
      op->vtkCGNSReader::GetBaseSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetFamilySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFamilySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFamilySelection() :
      op->vtkCGNSReader::GetFamilySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetBaseArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBaseArrayStatus(temp0) :
      op->vtkCGNSReader::GetBaseArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetBaseArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBaseArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkCGNSReader::SetBaseArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DisableAllBases(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllBases");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllBases();
    }
    else
    {
      op->vtkCGNSReader::DisableAllBases();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_EnableAllBases(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllBases");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllBases();
    }
    else
    {
      op->vtkCGNSReader::EnableAllBases();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfBaseArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBaseArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBaseArrays() :
      op->vtkCGNSReader::GetNumberOfBaseArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetBaseArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBaseArrayName(temp0) :
      op->vtkCGNSReader::GetBaseArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfFamilyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFamilyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFamilyArrays() :
      op->vtkCGNSReader::GetNumberOfFamilyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetFamilyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFamilyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFamilyArrayName(temp0) :
      op->vtkCGNSReader::GetFamilyArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetFamilyArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFamilyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFamilyArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkCGNSReader::SetFamilyArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetFamilyArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFamilyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFamilyArrayStatus(temp0) :
      op->vtkCGNSReader::GetFamilyArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_EnableAllFamilies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllFamilies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllFamilies();
    }
    else
    {
      op->vtkCGNSReader::EnableAllFamilies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DisableAllFamilies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllFamilies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllFamilies();
    }
    else
    {
      op->vtkCGNSReader::DisableAllFamilies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkCGNSReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkCGNSReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkCGNSReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

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
      op->vtkCGNSReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkCGNSReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkCGNSReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkCGNSReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkCGNSReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkCGNSReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

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
      op->vtkCGNSReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllCellArrays();
    }
    else
    {
      op->vtkCGNSReader::DisableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllCellArrays();
    }
    else
    {
      op->vtkCGNSReader::EnableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfFaceArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaceArrays() :
      op->vtkCGNSReader::GetNumberOfFaceArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetFaceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFaceArrayName(temp0) :
      op->vtkCGNSReader::GetFaceArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetFaceArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceArrayStatus(temp0) :
      op->vtkCGNSReader::GetFaceArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetFaceArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFaceArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkCGNSReader::SetFaceArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DisableAllFaceArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllFaceArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllFaceArrays();
    }
    else
    {
      op->vtkCGNSReader::DisableAllFaceArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_EnableAllFaceArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllFaceArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllFaceArrays();
    }
    else
    {
      op->vtkCGNSReader::EnableAllFaceArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetDoublePrecisionMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoublePrecisionMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoublePrecisionMesh(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetDoublePrecisionMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetDoublePrecisionMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoublePrecisionMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDoublePrecisionMesh() :
      op->vtkCGNSReader::GetDoublePrecisionMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DoublePrecisionMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePrecisionMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoublePrecisionMeshOn();
    }
    else
    {
      op->vtkCGNSReader::DoublePrecisionMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DoublePrecisionMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePrecisionMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoublePrecisionMeshOff();
    }
    else
    {
      op->vtkCGNSReader::DoublePrecisionMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetLoadBndPatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadBndPatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoadBndPatch(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetLoadBndPatch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetLoadBndPatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadBndPatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoadBndPatch() :
      op->vtkCGNSReader::GetLoadBndPatch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_LoadBndPatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadBndPatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadBndPatchOn();
    }
    else
    {
      op->vtkCGNSReader::LoadBndPatchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_LoadBndPatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadBndPatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadBndPatchOff();
    }
    else
    {
      op->vtkCGNSReader::LoadBndPatchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetLoadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoadMesh(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetLoadMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetLoadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoadMesh() :
      op->vtkCGNSReader::GetLoadMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_LoadMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadMeshOn();
    }
    else
    {
      op->vtkCGNSReader::LoadMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_LoadMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadMeshOff();
    }
    else
    {
      op->vtkCGNSReader::LoadMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetUse3DVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse3DVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUse3DVector(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetUse3DVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetUse3DVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse3DVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUse3DVector() :
      op->vtkCGNSReader::GetUse3DVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_Use3DVectorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use3DVectorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use3DVectorOn();
    }
    else
    {
      op->vtkCGNSReader::Use3DVectorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_Use3DVectorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use3DVectorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use3DVectorOff();
    }
    else
    {
      op->vtkCGNSReader::Use3DVectorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetCreateEachSolutionAsBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateEachSolutionAsBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateEachSolutionAsBlock(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetCreateEachSolutionAsBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetCreateEachSolutionAsBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateEachSolutionAsBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCreateEachSolutionAsBlock() :
      op->vtkCGNSReader::GetCreateEachSolutionAsBlock());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CreateEachSolutionAsBlockOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateEachSolutionAsBlockOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateEachSolutionAsBlockOn();
    }
    else
    {
      op->vtkCGNSReader::CreateEachSolutionAsBlockOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CreateEachSolutionAsBlockOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateEachSolutionAsBlockOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateEachSolutionAsBlockOff();
    }
    else
    {
      op->vtkCGNSReader::CreateEachSolutionAsBlockOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetIgnoreFlowSolutionPointers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreFlowSolutionPointers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreFlowSolutionPointers(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetIgnoreFlowSolutionPointers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetIgnoreFlowSolutionPointers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreFlowSolutionPointers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreFlowSolutionPointers() :
      op->vtkCGNSReader::GetIgnoreFlowSolutionPointers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_IgnoreFlowSolutionPointersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreFlowSolutionPointersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreFlowSolutionPointersOn();
    }
    else
    {
      op->vtkCGNSReader::IgnoreFlowSolutionPointersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_IgnoreFlowSolutionPointersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreFlowSolutionPointersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreFlowSolutionPointersOff();
    }
    else
    {
      op->vtkCGNSReader::IgnoreFlowSolutionPointersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetUseUnsteadyPattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUnsteadyPattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseUnsteadyPattern(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetUseUnsteadyPattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetUseUnsteadyPattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUnsteadyPattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseUnsteadyPattern() :
      op->vtkCGNSReader::GetUseUnsteadyPattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_UseUnsteadyPatternOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnsteadyPatternOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseUnsteadyPatternOn();
    }
    else
    {
      op->vtkCGNSReader::UseUnsteadyPatternOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_UseUnsteadyPatternOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnsteadyPatternOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseUnsteadyPatternOff();
    }
    else
    {
      op->vtkCGNSReader::UseUnsteadyPatternOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetUnsteadySolutionStartTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnsteadySolutionStartTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnsteadySolutionStartTimestep(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetUnsteadySolutionStartTimestep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetUnsteadySolutionStartTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnsteadySolutionStartTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUnsteadySolutionStartTimestep() :
      op->vtkCGNSReader::GetUnsteadySolutionStartTimestep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetDistributeBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributeBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistributeBlocks(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetDistributeBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetDistributeBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistributeBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDistributeBlocks() :
      op->vtkCGNSReader::GetDistributeBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DistributeBlocksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeBlocksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistributeBlocksOn();
    }
    else
    {
      op->vtkCGNSReader::DistributeBlocksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DistributeBlocksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeBlocksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistributeBlocksOff();
    }
    else
    {
      op->vtkCGNSReader::DistributeBlocksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetCacheMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheMesh(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetCacheMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetCacheMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCacheMesh() :
      op->vtkCGNSReader::GetCacheMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CacheMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheMeshOn();
    }
    else
    {
      op->vtkCGNSReader::CacheMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CacheMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheMeshOff();
    }
    else
    {
      op->vtkCGNSReader::CacheMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetCacheConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheConnectivity(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetCacheConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetCacheConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCacheConnectivity() :
      op->vtkCGNSReader::GetCacheConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CacheConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheConnectivityOn();
    }
    else
    {
      op->vtkCGNSReader::CacheConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CacheConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheConnectivityOff();
    }
    else
    {
      op->vtkCGNSReader::CacheConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

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
      op->vtkCGNSReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCGNSReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->Broadcast(temp0);
    }
    else
    {
      op->vtkCGNSReader::Broadcast(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_FAMILY(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FAMILY");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkCGNSReader::FAMILY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCGNSReader_Methods[] = {
  {"IsTypeOf", PyvtkCGNSReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCGNSReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCGNSReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCGNSReader\nC++: static vtkCGNSReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCGNSReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCGNSReader\nC++: vtkCGNSReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCGNSReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCGNSReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDataLocation", PyvtkCGNSReader_SetDataLocation, METH_VARARGS,
   "SetDataLocation(self, _arg:int) -> None\nC++: virtual void SetDataLocation(int _arg)\n\nSet/get the location of the data arrays to read. Possible values\nfor the data location are:\n- CELL_DATA - Read CellCenter data arrays from the CGNS file.\n  Construct 3D meshes with 3D cells (e.g. a cube is defined as 1\n  cell).\n- FACE_DATA - Read FaceCenter data arrays from the CGNS file.\n  Construct 3D meshes with 2D cells/faces (e.g. a cube is defined\nas 6 quad cells). Element connectivity must be defined with\n  element type NGON_n.\n\nDefault is CELL_DATA.\n"},
  {"GetDataLocationMinValue", PyvtkCGNSReader_GetDataLocationMinValue, METH_VARARGS,
   "GetDataLocationMinValue(self) -> int\nC++: virtual int GetDataLocationMinValue()\n\n"},
  {"GetDataLocationMaxValue", PyvtkCGNSReader_GetDataLocationMaxValue, METH_VARARGS,
   "GetDataLocationMaxValue(self) -> int\nC++: virtual int GetDataLocationMaxValue()\n\n"},
  {"GetDataLocation", PyvtkCGNSReader_GetDataLocation, METH_VARARGS,
   "GetDataLocation(self) -> int\nC++: virtual int GetDataLocation()\n\n"},
  {"SetFileName", PyvtkCGNSReader_SetFileName, METH_VARARGS,
   "SetFileName(self, arg:str) -> None\nC++: virtual void SetFileName(const char *arg)\n\nSpecify file name of CGNS datafile to read\n"},
  {"GetFileName", PyvtkCGNSReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual const char *GetFileName()\n\n"},
  {"CanReadFile", PyvtkCGNSReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, filename:str) -> int\nC++: int CanReadFile(const char *filename)\n\nIs the given file name a CGNS file?\n"},
  {"GetBaseSelection", PyvtkCGNSReader_GetBaseSelection, METH_VARARGS,
   "GetBaseSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetBaseSelection()\n\nReturns access to the base selection object.\n"},
  {"GetFamilySelection", PyvtkCGNSReader_GetFamilySelection, METH_VARARGS,
   "GetFamilySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFamilySelection()\n\nReturns access to the family selection object.\n"},
  {"GetBaseArrayStatus", PyvtkCGNSReader_GetBaseArrayStatus, METH_VARARGS,
   "GetBaseArrayStatus(self, name:str) -> int\nC++: int GetBaseArrayStatus(const char *name)\n\nAPI to select bases to read. These calls simply forward to the\nvtkDataArraySelection instance obtained from\n`GetBaseSelection()`.\n\nBy default, 0-th base is enabled and all others are disabled.\n"},
  {"SetBaseArrayStatus", PyvtkCGNSReader_SetBaseArrayStatus, METH_VARARGS,
   "SetBaseArrayStatus(self, name:str, status:int) -> None\nC++: void SetBaseArrayStatus(const char *name, int status)\n\n"},
  {"DisableAllBases", PyvtkCGNSReader_DisableAllBases, METH_VARARGS,
   "DisableAllBases(self) -> None\nC++: void DisableAllBases()\n\n"},
  {"EnableAllBases", PyvtkCGNSReader_EnableAllBases, METH_VARARGS,
   "EnableAllBases(self) -> None\nC++: void EnableAllBases()\n\n"},
  {"GetNumberOfBaseArrays", PyvtkCGNSReader_GetNumberOfBaseArrays, METH_VARARGS,
   "GetNumberOfBaseArrays(self) -> int\nC++: int GetNumberOfBaseArrays()\n\n"},
  {"GetBaseArrayName", PyvtkCGNSReader_GetBaseArrayName, METH_VARARGS,
   "GetBaseArrayName(self, index:int) -> str\nC++: const char *GetBaseArrayName(int index)\n\n"},
  {"GetNumberOfFamilyArrays", PyvtkCGNSReader_GetNumberOfFamilyArrays, METH_VARARGS,
   "GetNumberOfFamilyArrays(self) -> int\nC++: int GetNumberOfFamilyArrays()\n\nAPI to select families to read. These calls simply forward to the\nvtkDataArraySelection instance obtained from\n`GetFamilySelection()`.\n"},
  {"GetFamilyArrayName", PyvtkCGNSReader_GetFamilyArrayName, METH_VARARGS,
   "GetFamilyArrayName(self, index:int) -> str\nC++: const char *GetFamilyArrayName(int index)\n\n"},
  {"SetFamilyArrayStatus", PyvtkCGNSReader_SetFamilyArrayStatus, METH_VARARGS,
   "SetFamilyArrayStatus(self, name:str, status:int) -> None\nC++: void SetFamilyArrayStatus(const char *name, int status)\n\n"},
  {"GetFamilyArrayStatus", PyvtkCGNSReader_GetFamilyArrayStatus, METH_VARARGS,
   "GetFamilyArrayStatus(self, name:str) -> int\nC++: int GetFamilyArrayStatus(const char *name)\n\n"},
  {"EnableAllFamilies", PyvtkCGNSReader_EnableAllFamilies, METH_VARARGS,
   "EnableAllFamilies(self) -> None\nC++: void EnableAllFamilies()\n\n"},
  {"DisableAllFamilies", PyvtkCGNSReader_DisableAllFamilies, METH_VARARGS,
   "DisableAllFamilies(self) -> None\nC++: void DisableAllFamilies()\n\n"},
  {"GetNumberOfPointArrays", PyvtkCGNSReader_GetNumberOfPointArrays, METH_VARARGS,
   "GetNumberOfPointArrays(self) -> int\nC++: int GetNumberOfPointArrays()\n\nAPI to get information of point arrays and enable/disable loading\nof particular arrays.\n"},
  {"GetPointArrayName", PyvtkCGNSReader_GetPointArrayName, METH_VARARGS,
   "GetPointArrayName(self, index:int) -> str\nC++: const char *GetPointArrayName(int index)\n\n"},
  {"GetPointArrayStatus", PyvtkCGNSReader_GetPointArrayStatus, METH_VARARGS,
   "GetPointArrayStatus(self, name:str) -> int\nC++: int GetPointArrayStatus(const char *name)\n\n"},
  {"SetPointArrayStatus", PyvtkCGNSReader_SetPointArrayStatus, METH_VARARGS,
   "SetPointArrayStatus(self, name:str, status:int) -> None\nC++: void SetPointArrayStatus(const char *name, int status)\n\n"},
  {"DisableAllPointArrays", PyvtkCGNSReader_DisableAllPointArrays, METH_VARARGS,
   "DisableAllPointArrays(self) -> None\nC++: void DisableAllPointArrays()\n\n"},
  {"EnableAllPointArrays", PyvtkCGNSReader_EnableAllPointArrays, METH_VARARGS,
   "EnableAllPointArrays(self) -> None\nC++: void EnableAllPointArrays()\n\n"},
  {"GetNumberOfCellArrays", PyvtkCGNSReader_GetNumberOfCellArrays, METH_VARARGS,
   "GetNumberOfCellArrays(self) -> int\nC++: int GetNumberOfCellArrays()\n\nAPI to get information of cell arrays and enable/disable loading\nof particular arrays.\n"},
  {"GetCellArrayName", PyvtkCGNSReader_GetCellArrayName, METH_VARARGS,
   "GetCellArrayName(self, index:int) -> str\nC++: const char *GetCellArrayName(int index)\n\n"},
  {"GetCellArrayStatus", PyvtkCGNSReader_GetCellArrayStatus, METH_VARARGS,
   "GetCellArrayStatus(self, name:str) -> int\nC++: int GetCellArrayStatus(const char *name)\n\n"},
  {"SetCellArrayStatus", PyvtkCGNSReader_SetCellArrayStatus, METH_VARARGS,
   "SetCellArrayStatus(self, name:str, status:int) -> None\nC++: void SetCellArrayStatus(const char *name, int status)\n\n"},
  {"DisableAllCellArrays", PyvtkCGNSReader_DisableAllCellArrays, METH_VARARGS,
   "DisableAllCellArrays(self) -> None\nC++: void DisableAllCellArrays()\n\n"},
  {"EnableAllCellArrays", PyvtkCGNSReader_EnableAllCellArrays, METH_VARARGS,
   "EnableAllCellArrays(self) -> None\nC++: void EnableAllCellArrays()\n\n"},
  {"GetNumberOfFaceArrays", PyvtkCGNSReader_GetNumberOfFaceArrays, METH_VARARGS,
   "GetNumberOfFaceArrays(self) -> int\nC++: int GetNumberOfFaceArrays()\n\nAPI to get information of face arrays and enable/disable loading\nof particular arrays.\n"},
  {"GetFaceArrayName", PyvtkCGNSReader_GetFaceArrayName, METH_VARARGS,
   "GetFaceArrayName(self, index:int) -> str\nC++: const char *GetFaceArrayName(int index)\n\n"},
  {"GetFaceArrayStatus", PyvtkCGNSReader_GetFaceArrayStatus, METH_VARARGS,
   "GetFaceArrayStatus(self, name:str) -> int\nC++: int GetFaceArrayStatus(const char *name)\n\n"},
  {"SetFaceArrayStatus", PyvtkCGNSReader_SetFaceArrayStatus, METH_VARARGS,
   "SetFaceArrayStatus(self, name:str, status:int) -> None\nC++: void SetFaceArrayStatus(const char *name, int status)\n\n"},
  {"DisableAllFaceArrays", PyvtkCGNSReader_DisableAllFaceArrays, METH_VARARGS,
   "DisableAllFaceArrays(self) -> None\nC++: void DisableAllFaceArrays()\n\n"},
  {"EnableAllFaceArrays", PyvtkCGNSReader_EnableAllFaceArrays, METH_VARARGS,
   "EnableAllFaceArrays(self) -> None\nC++: void EnableAllFaceArrays()\n\n"},
  {"SetDoublePrecisionMesh", PyvtkCGNSReader_SetDoublePrecisionMesh, METH_VARARGS,
   "SetDoublePrecisionMesh(self, _arg:int) -> None\nC++: virtual void SetDoublePrecisionMesh(int _arg)\n\nEnable/disable double precision when reading the mesh. Defaults\nto 1 (true).\n"},
  {"GetDoublePrecisionMesh", PyvtkCGNSReader_GetDoublePrecisionMesh, METH_VARARGS,
   "GetDoublePrecisionMesh(self) -> int\nC++: virtual int GetDoublePrecisionMesh()\n\n"},
  {"DoublePrecisionMeshOn", PyvtkCGNSReader_DoublePrecisionMeshOn, METH_VARARGS,
   "DoublePrecisionMeshOn(self) -> None\nC++: virtual void DoublePrecisionMeshOn()\n\n"},
  {"DoublePrecisionMeshOff", PyvtkCGNSReader_DoublePrecisionMeshOff, METH_VARARGS,
   "DoublePrecisionMeshOff(self) -> None\nC++: virtual void DoublePrecisionMeshOff()\n\n"},
  {"SetLoadBndPatch", PyvtkCGNSReader_SetLoadBndPatch, METH_VARARGS,
   "SetLoadBndPatch(self, _arg:bool) -> None\nC++: virtual void SetLoadBndPatch(bool _arg)\n\nEnable/disable loading of boundary condition patches. Defaults to\nfalse.\n"},
  {"GetLoadBndPatch", PyvtkCGNSReader_GetLoadBndPatch, METH_VARARGS,
   "GetLoadBndPatch(self) -> bool\nC++: virtual bool GetLoadBndPatch()\n\n"},
  {"LoadBndPatchOn", PyvtkCGNSReader_LoadBndPatchOn, METH_VARARGS,
   "LoadBndPatchOn(self) -> None\nC++: virtual void LoadBndPatchOn()\n\n"},
  {"LoadBndPatchOff", PyvtkCGNSReader_LoadBndPatchOff, METH_VARARGS,
   "LoadBndPatchOff(self) -> None\nC++: virtual void LoadBndPatchOff()\n\n"},
  {"SetLoadMesh", PyvtkCGNSReader_SetLoadMesh, METH_VARARGS,
   "SetLoadMesh(self, _arg:bool) -> None\nC++: virtual void SetLoadMesh(bool _arg)\n\nEnable/disable loading of zone mesh. Defaults to true. It may be\nturned off to load only boundary patches (when LoadBndPatch if\nON), for example.\n"},
  {"GetLoadMesh", PyvtkCGNSReader_GetLoadMesh, METH_VARARGS,
   "GetLoadMesh(self) -> bool\nC++: virtual bool GetLoadMesh()\n\n"},
  {"LoadMeshOn", PyvtkCGNSReader_LoadMeshOn, METH_VARARGS,
   "LoadMeshOn(self) -> None\nC++: virtual void LoadMeshOn()\n\n"},
  {"LoadMeshOff", PyvtkCGNSReader_LoadMeshOff, METH_VARARGS,
   "LoadMeshOff(self) -> None\nC++: virtual void LoadMeshOff()\n\n"},
  {"SetUse3DVector", PyvtkCGNSReader_SetUse3DVector, METH_VARARGS,
   "SetUse3DVector(self, _arg:bool) -> None\nC++: virtual void SetUse3DVector(bool _arg)\n\nEnable/disable adding an empty physical dimension to vectors in\ncase of 2D solutions. Default is true.\n"},
  {"GetUse3DVector", PyvtkCGNSReader_GetUse3DVector, METH_VARARGS,
   "GetUse3DVector(self) -> bool\nC++: virtual bool GetUse3DVector()\n\n"},
  {"Use3DVectorOn", PyvtkCGNSReader_Use3DVectorOn, METH_VARARGS,
   "Use3DVectorOn(self) -> None\nC++: virtual void Use3DVectorOn()\n\n"},
  {"Use3DVectorOff", PyvtkCGNSReader_Use3DVectorOff, METH_VARARGS,
   "Use3DVectorOff(self) -> None\nC++: virtual void Use3DVectorOff()\n\n"},
  {"SetCreateEachSolutionAsBlock", PyvtkCGNSReader_SetCreateEachSolutionAsBlock, METH_VARARGS,
   "SetCreateEachSolutionAsBlock(self, _arg:int) -> None\nC++: virtual void SetCreateEachSolutionAsBlock(int _arg)\n\nThis option is provided for debugging and should not be used for\nproduction runs as the output data produced may not be correct.\nWhen set to true, the reader will simply read each solution\n(`FlowSolution_t`) node encountered in a zone and create a\nseparate block under the block corresponding to the zone in the\noutput. Default is 0 (false).\n"},
  {"GetCreateEachSolutionAsBlock", PyvtkCGNSReader_GetCreateEachSolutionAsBlock, METH_VARARGS,
   "GetCreateEachSolutionAsBlock(self) -> int\nC++: virtual int GetCreateEachSolutionAsBlock()\n\n"},
  {"CreateEachSolutionAsBlockOn", PyvtkCGNSReader_CreateEachSolutionAsBlockOn, METH_VARARGS,
   "CreateEachSolutionAsBlockOn(self) -> None\nC++: virtual void CreateEachSolutionAsBlockOn()\n\n"},
  {"CreateEachSolutionAsBlockOff", PyvtkCGNSReader_CreateEachSolutionAsBlockOff, METH_VARARGS,
   "CreateEachSolutionAsBlockOff(self) -> None\nC++: virtual void CreateEachSolutionAsBlockOff()\n\n"},
  {"SetIgnoreFlowSolutionPointers", PyvtkCGNSReader_SetIgnoreFlowSolutionPointers, METH_VARARGS,
   "SetIgnoreFlowSolutionPointers(self, _arg:bool) -> None\nC++: virtual void SetIgnoreFlowSolutionPointers(bool _arg)\n\nWhen set to true (default is false), the reader will simply\nignore `FlowSolutionPointers` since they are either incomplete or\ninvalid and instead will rely on FlowSolution_t nodes being\nlabelled as \"...AtStep<tsindex>\" to locate solution nodes for a\nspecific timestep. Note, tsindex starts with 1 (not zero).\n\nWhen set to false, the reader will still try to confirm that at\nleast one valid FlowSolution_t node is referred to in\nFlowSolutionPointers nodes for the current timestep. If none is\nfound, then the reader will print out a warning and act as if\nIgnoreFlowSolutionPointers was set to true. To avoid this\nwarning, one should set IgnoreFlowSolutionPointers to true.\n"},
  {"GetIgnoreFlowSolutionPointers", PyvtkCGNSReader_GetIgnoreFlowSolutionPointers, METH_VARARGS,
   "GetIgnoreFlowSolutionPointers(self) -> bool\nC++: virtual bool GetIgnoreFlowSolutionPointers()\n\n"},
  {"IgnoreFlowSolutionPointersOn", PyvtkCGNSReader_IgnoreFlowSolutionPointersOn, METH_VARARGS,
   "IgnoreFlowSolutionPointersOn(self) -> None\nC++: virtual void IgnoreFlowSolutionPointersOn()\n\n"},
  {"IgnoreFlowSolutionPointersOff", PyvtkCGNSReader_IgnoreFlowSolutionPointersOff, METH_VARARGS,
   "IgnoreFlowSolutionPointersOff(self) -> None\nC++: virtual void IgnoreFlowSolutionPointersOff()\n\n"},
  {"SetUseUnsteadyPattern", PyvtkCGNSReader_SetUseUnsteadyPattern, METH_VARARGS,
   "SetUseUnsteadyPattern(self, _arg:bool) -> None\nC++: virtual void SetUseUnsteadyPattern(bool _arg)\n\nWhen set to true (default is false), the reader will try to\ndetermine to determine FlowSolution_t nodes to read with pattern\nmatching. This can be useful for unsteady solutions when\n`FlowSolutionPointers` are not reliable.\n"},
  {"GetUseUnsteadyPattern", PyvtkCGNSReader_GetUseUnsteadyPattern, METH_VARARGS,
   "GetUseUnsteadyPattern(self) -> bool\nC++: virtual bool GetUseUnsteadyPattern()\n\n"},
  {"UseUnsteadyPatternOn", PyvtkCGNSReader_UseUnsteadyPatternOn, METH_VARARGS,
   "UseUnsteadyPatternOn(self) -> None\nC++: virtual void UseUnsteadyPatternOn()\n\n"},
  {"UseUnsteadyPatternOff", PyvtkCGNSReader_UseUnsteadyPatternOff, METH_VARARGS,
   "UseUnsteadyPatternOff(self) -> None\nC++: virtual void UseUnsteadyPatternOff()\n\n"},
  {"SetUnsteadySolutionStartTimestep", PyvtkCGNSReader_SetUnsteadySolutionStartTimestep, METH_VARARGS,
   "SetUnsteadySolutionStartTimestep(self, _arg:int) -> None\nC++: virtual void SetUnsteadySolutionStartTimestep(int _arg)\n\nSet/get the index of the first timestep when reading unsteady\nsolutions. Only used when \"UseUnsteadyPattern\" is true. Default\nis 0.\n"},
  {"GetUnsteadySolutionStartTimestep", PyvtkCGNSReader_GetUnsteadySolutionStartTimestep, METH_VARARGS,
   "GetUnsteadySolutionStartTimestep(self) -> int\nC++: virtual int GetUnsteadySolutionStartTimestep()\n\n"},
  {"SetDistributeBlocks", PyvtkCGNSReader_SetDistributeBlocks, METH_VARARGS,
   "SetDistributeBlocks(self, _arg:bool) -> None\nC++: virtual void SetDistributeBlocks(bool _arg)\n\nThis reader can support piece requests by distributing each block\nin each zone across ranks (default). To make the reader disregard\npiece request and read all blocks in the zone, set this to false\n(default is true).\n"},
  {"GetDistributeBlocks", PyvtkCGNSReader_GetDistributeBlocks, METH_VARARGS,
   "GetDistributeBlocks(self) -> bool\nC++: virtual bool GetDistributeBlocks()\n\n"},
  {"DistributeBlocksOn", PyvtkCGNSReader_DistributeBlocksOn, METH_VARARGS,
   "DistributeBlocksOn(self) -> None\nC++: virtual void DistributeBlocksOn()\n\n"},
  {"DistributeBlocksOff", PyvtkCGNSReader_DistributeBlocksOff, METH_VARARGS,
   "DistributeBlocksOff(self) -> None\nC++: virtual void DistributeBlocksOff()\n\n"},
  {"SetCacheMesh", PyvtkCGNSReader_SetCacheMesh, METH_VARARGS,
   "SetCacheMesh(self, enable:bool) -> None\nC++: void SetCacheMesh(bool enable)\n\nThis reader can cache the mesh points if they are time invariant.\nThey will be stored with a unique reference to their\n/base/zoneName and not be read in the file when doing unsteady\nanalysis. Default is false.\n"},
  {"GetCacheMesh", PyvtkCGNSReader_GetCacheMesh, METH_VARARGS,
   "GetCacheMesh(self) -> bool\nC++: virtual bool GetCacheMesh()\n\n"},
  {"CacheMeshOn", PyvtkCGNSReader_CacheMeshOn, METH_VARARGS,
   "CacheMeshOn(self) -> None\nC++: virtual void CacheMeshOn()\n\n"},
  {"CacheMeshOff", PyvtkCGNSReader_CacheMeshOff, METH_VARARGS,
   "CacheMeshOff(self) -> None\nC++: virtual void CacheMeshOff()\n\n"},
  {"SetCacheConnectivity", PyvtkCGNSReader_SetCacheConnectivity, METH_VARARGS,
   "SetCacheConnectivity(self, enable:bool) -> None\nC++: void SetCacheConnectivity(bool enable)\n\nThis reader can cache the mesh connectivities if they are time\ninvariant. They will be stored with a unique reference to their\n/base/zoneName and not be read in the file when doing unsteady\nanalysis. Default is false.\n"},
  {"GetCacheConnectivity", PyvtkCGNSReader_GetCacheConnectivity, METH_VARARGS,
   "GetCacheConnectivity(self) -> bool\nC++: virtual bool GetCacheConnectivity()\n\n"},
  {"CacheConnectivityOn", PyvtkCGNSReader_CacheConnectivityOn, METH_VARARGS,
   "CacheConnectivityOn(self) -> None\nC++: virtual void CacheConnectivityOn()\n\n"},
  {"CacheConnectivityOff", PyvtkCGNSReader_CacheConnectivityOff, METH_VARARGS,
   "CacheConnectivityOff(self) -> None\nC++: virtual void CacheConnectivityOff()\n\n"},
  {"SetController", PyvtkCGNSReader_SetController, METH_VARARGS,
   "SetController(self, c:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/get the communication object used to relay a list of files\nfrom the rank 0 process to all others. This is the only\ninterprocess communication required by vtkCGNSReader.\n"},
  {"GetController", PyvtkCGNSReader_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"Broadcast", PyvtkCGNSReader_Broadcast, METH_VARARGS,
   "Broadcast(self, ctrl:vtkMultiProcessController) -> None\nC++: void Broadcast(vtkMultiProcessController *ctrl)\n\nSends metadata (that read from the input file, not settings\nmodified through this API) from the rank 0 node to all other\nprocesses in a job.\n"},
  {"FAMILY", PyvtkCGNSReader_FAMILY, METH_VARARGS,
   "FAMILY() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *FAMILY()\n\nKey used to put a family name in the meta-data associated with a\nnode\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCGNSReader_Doc =
  "vtkCGNSReader - vtkCGNSReader creates a multi-block dataset and reads\nunstructured grids and structured meshes from binary files stored in\nCGNS file format, with data stored at the nodes, cells or faces.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkCGNSReader is inspired by the VisIt CGNS reader originally written\n"
  "by B. Whitlock. vtkCGNSReader relies on the low level CGNS API to\n"
  "load data sets and reduce memory footprint.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCGNSReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCGNSReader.vtkCGNSReader", // tp_name
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
  PyvtkCGNSReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCGNSReader_StaticNew()
{
  return vtkCGNSReader::New();
}

PyObject *PyvtkCGNSReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCGNSReader_Type, PyvtkCGNSReader_Methods,
    "vtkCGNSReader",
 &PyvtkCGNSReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCGNSReader_DataArrayLocation_Type);
  PyVTKEnum_Add(&PyvtkCGNSReader_DataArrayLocation_Type, "vtkCGNSReader.DataArrayLocation");

  o = (PyObject *)&PyvtkCGNSReader_DataArrayLocation_Type;
  if (PyDict_SetItemString(d, "DataArrayLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkCGNSReader::DataArrayLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "CELL_DATA", vtkCGNSReader::CELL_DATA },
        { "FACE_DATA", vtkCGNSReader::FACE_DATA },
      };

    o = PyvtkCGNSReader_DataArrayLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCGNSReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCGNSReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCGNSReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

