// python wrapper for vtkCesium3DTilesWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCesium3DTilesWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCesium3DTilesWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkCesium3DTilesWriter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCesium3DTilesWriter_InputType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCesium3DTiles.vtkCesium3DTilesWriter.InputType", // tp_name
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
PyObject *PyvtkCesium3DTilesWriter_InputType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCesium3DTilesWriter_InputType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCesium3DTilesWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCesium3DTilesWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCesium3DTilesWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCesium3DTilesWriter *tempr = vtkCesium3DTilesWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCesium3DTilesWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCesium3DTilesWriter::NewInstance());

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
PyvtkCesium3DTilesWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCesium3DTilesWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCesium3DTilesWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetDirectoryName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectoryName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectoryName(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetDirectoryName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetDirectoryName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectoryName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDirectoryName() :
      op->vtkCesium3DTilesWriter::GetDirectoryName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetTextureBaseDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureBaseDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureBaseDirectory(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetTextureBaseDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetTextureBaseDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureBaseDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTextureBaseDirectory() :
      op->vtkCesium3DTilesWriter::GetTextureBaseDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetPropertyTextureFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyTextureFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPropertyTextureFile(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetPropertyTextureFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetPropertyTextureFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyTextureFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPropertyTextureFile() :
      op->vtkCesium3DTilesWriter::GetPropertyTextureFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

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
      op->SetOffset(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetOffset(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCesium3DTilesWriter_SetOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCesium3DTilesWriter_SetOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCesium3DTilesWriter_SetOffset_s1(self, args);
    case 1:
      return PyvtkCesium3DTilesWriter_SetOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOffset");
  return nullptr;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkCesium3DTilesWriter::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetSaveTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveTextures(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetSaveTextures(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetSaveTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSaveTextures() :
      op->vtkCesium3DTilesWriter::GetSaveTextures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SaveTexturesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveTexturesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveTexturesOn();
    }
    else
    {
      op->vtkCesium3DTilesWriter::SaveTexturesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SaveTexturesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveTexturesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveTexturesOff();
    }
    else
    {
      op->vtkCesium3DTilesWriter::SaveTexturesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetSaveTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveTiles(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetSaveTiles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetSaveTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSaveTiles() :
      op->vtkCesium3DTilesWriter::GetSaveTiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SaveTilesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveTilesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveTilesOn();
    }
    else
    {
      op->vtkCesium3DTilesWriter::SaveTilesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SaveTilesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveTilesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveTilesOff();
    }
    else
    {
      op->vtkCesium3DTilesWriter::SaveTilesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetMergeTilePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTilePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeTilePolyData(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetMergeTilePolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetMergeTilePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTilePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeTilePolyData() :
      op->vtkCesium3DTilesWriter::GetMergeTilePolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_MergeTilePolyDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeTilePolyDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeTilePolyDataOn();
    }
    else
    {
      op->vtkCesium3DTilesWriter::MergeTilePolyDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_MergeTilePolyDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeTilePolyDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeTilePolyDataOff();
    }
    else
    {
      op->vtkCesium3DTilesWriter::MergeTilePolyDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetMergedTextureWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergedTextureWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergedTextureWidth(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetMergedTextureWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetMergedTextureWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergedTextureWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMergedTextureWidth() :
      op->vtkCesium3DTilesWriter::GetMergedTextureWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetContentGLTF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentGLTF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContentGLTF(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetContentGLTF(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetContentGLTF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentGLTF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetContentGLTF() :
      op->vtkCesium3DTilesWriter::GetContentGLTF());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_ContentGLTFOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContentGLTFOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ContentGLTFOn();
    }
    else
    {
      op->vtkCesium3DTilesWriter::ContentGLTFOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_ContentGLTFOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContentGLTFOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ContentGLTFOff();
    }
    else
    {
      op->vtkCesium3DTilesWriter::ContentGLTFOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetContentGLTFSaveGLB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentGLTFSaveGLB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContentGLTFSaveGLB(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetContentGLTFSaveGLB(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetContentGLTFSaveGLB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentGLTFSaveGLB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetContentGLTFSaveGLB() :
      op->vtkCesium3DTilesWriter::GetContentGLTFSaveGLB());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_ContentGLTFSaveGLBOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContentGLTFSaveGLBOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ContentGLTFSaveGLBOn();
    }
    else
    {
      op->vtkCesium3DTilesWriter::ContentGLTFSaveGLBOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_ContentGLTFSaveGLBOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContentGLTFSaveGLBOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ContentGLTFSaveGLBOff();
    }
    else
    {
      op->vtkCesium3DTilesWriter::ContentGLTFSaveGLBOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetInputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputType(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetInputType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetInputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputType() :
      op->vtkCesium3DTilesWriter::GetInputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetNumberOfFeaturesPerTile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFeaturesPerTile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfFeaturesPerTile(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetNumberOfFeaturesPerTile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetNumberOfFeaturesPerTile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFeaturesPerTile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFeaturesPerTile() :
      op->vtkCesium3DTilesWriter::GetNumberOfFeaturesPerTile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_SetCRS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCRS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCRS(temp0);
    }
    else
    {
      op->vtkCesium3DTilesWriter::SetCRS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCesium3DTilesWriter_GetCRS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCRS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCesium3DTilesWriter *op = static_cast<vtkCesium3DTilesWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCRS() :
      op->vtkCesium3DTilesWriter::GetCRS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCesium3DTilesWriter_Methods[] = {
  {"IsTypeOf", PyvtkCesium3DTilesWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCesium3DTilesWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCesium3DTilesWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCesium3DTilesWriter\nC++: static vtkCesium3DTilesWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCesium3DTilesWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCesium3DTilesWriter\nC++: vtkCesium3DTilesWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCesium3DTilesWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCesium3DTilesWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDirectoryName", PyvtkCesium3DTilesWriter_SetDirectoryName, METH_VARARGS,
   "SetDirectoryName(self, _arg:str) -> None\nC++: virtual void SetDirectoryName(const char *_arg)\n\nAccessor for name of the directory where Cesium3DTiles data is\nwritten\n"},
  {"GetDirectoryName", PyvtkCesium3DTilesWriter_GetDirectoryName, METH_VARARGS,
   "GetDirectoryName(self) -> str\nC++: virtual char *GetDirectoryName()\n\n"},
  {"SetTextureBaseDirectory", PyvtkCesium3DTilesWriter_SetTextureBaseDirectory, METH_VARARGS,
   "SetTextureBaseDirectory(self, _arg:str) -> None\nC++: virtual void SetTextureBaseDirectory(const char *_arg)\n\nPath used to prefix all texture paths stored as fields in the\ninput data.@see vtkCityGMLReader\n"},
  {"GetTextureBaseDirectory", PyvtkCesium3DTilesWriter_GetTextureBaseDirectory, METH_VARARGS,
   "GetTextureBaseDirectory(self) -> str\nC++: virtual char *GetTextureBaseDirectory()\n\n"},
  {"SetPropertyTextureFile", PyvtkCesium3DTilesWriter_SetPropertyTextureFile, METH_VARARGS,
   "SetPropertyTextureFile(self, _arg:str) -> None\nC++: virtual void SetPropertyTextureFile(const char *_arg)\n\nOptional property texture mapping for the whole dataset. This is\na json file described in <a\nhref=\"https://github.com/CesiumGS/3d-tiles/tree/main/specification/Metadata\"\n>3D Metadataand\n <a\nhref=\"https://github.com/CesiumGS/glTF/tree/3d-tiles-next/extensions/2.0/Vendor/EXT_structural_metadata\"\n>EXT_structural_metadata\n* @see vtkCityGMLReader\n"},
  {"GetPropertyTextureFile", PyvtkCesium3DTilesWriter_GetPropertyTextureFile, METH_VARARGS,
   "GetPropertyTextureFile(self) -> str\nC++: virtual char *GetPropertyTextureFile()\n\n"},
  {"SetOffset", PyvtkCesium3DTilesWriter_SetOffset, METH_VARARGS,
   "SetOffset(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOffset(double _arg1, double _arg2,\n    double _arg3)\nSetOffset(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOffset(const double _arg[3])\n\nData coordinates are relative to this origin. To get the actual\ncoordinates data has to be translated with the Offset.\n"},
  {"GetOffset", PyvtkCesium3DTilesWriter_GetOffset, METH_VARARGS,
   "GetOffset(self) -> (float, float, float)\nC++: virtual double *GetOffset()\n\n"},
  {"SetSaveTextures", PyvtkCesium3DTilesWriter_SetSaveTextures, METH_VARARGS,
   "SetSaveTextures(self, _arg:bool) -> None\nC++: virtual void SetSaveTextures(bool _arg)\n\nSave textures as part of the 3D Tiles dataset. Default true.\nOtherwise save only the mesh.\n"},
  {"GetSaveTextures", PyvtkCesium3DTilesWriter_GetSaveTextures, METH_VARARGS,
   "GetSaveTextures(self) -> bool\nC++: virtual bool GetSaveTextures()\n\n"},
  {"SaveTexturesOn", PyvtkCesium3DTilesWriter_SaveTexturesOn, METH_VARARGS,
   "SaveTexturesOn(self) -> None\nC++: virtual void SaveTexturesOn()\n\n"},
  {"SaveTexturesOff", PyvtkCesium3DTilesWriter_SaveTexturesOff, METH_VARARGS,
   "SaveTexturesOff(self) -> None\nC++: virtual void SaveTexturesOff()\n\n"},
  {"SetSaveTiles", PyvtkCesium3DTilesWriter_SetSaveTiles, METH_VARARGS,
   "SetSaveTiles(self, _arg:bool) -> None\nC++: virtual void SetSaveTiles(bool _arg)\n\nSave the tiles (B3DMs) as part of the 3D Tiles dataset. Default\ntrue. Otherwise save only the tileset (JSON) file. This is mainly\nused for debugging. Default true.\n"},
  {"GetSaveTiles", PyvtkCesium3DTilesWriter_GetSaveTiles, METH_VARARGS,
   "GetSaveTiles(self) -> bool\nC++: virtual bool GetSaveTiles()\n\n"},
  {"SaveTilesOn", PyvtkCesium3DTilesWriter_SaveTilesOn, METH_VARARGS,
   "SaveTilesOn(self) -> None\nC++: virtual void SaveTilesOn()\n\n"},
  {"SaveTilesOff", PyvtkCesium3DTilesWriter_SaveTilesOff, METH_VARARGS,
   "SaveTilesOff(self) -> None\nC++: virtual void SaveTilesOff()\n\n"},
  {"SetMergeTilePolyData", PyvtkCesium3DTilesWriter_SetMergeTilePolyData, METH_VARARGS,
   "SetMergeTilePolyData(self, _arg:bool) -> None\nC++: virtual void SetMergeTilePolyData(bool _arg)\n\nMerge all meshes in each tile so we end up with one mesh per\ntile. If polydata has textures we merged textures as well such\nthat the width of the resulting texture is less then\nMergedTextureWidth (this is measured in number of input\ntextures). If MergedTextureWidth is not specified it is computed\nas sqrt of the number of input textures. Default is false which\nmeans that we expect an external program to merge the meshes in\neach tile to improve performance (such as meshoptimizer).\notherwise we merge the polydata in VTK.@see\nhttps://meshoptimizer.org/\n"},
  {"GetMergeTilePolyData", PyvtkCesium3DTilesWriter_GetMergeTilePolyData, METH_VARARGS,
   "GetMergeTilePolyData(self) -> bool\nC++: virtual bool GetMergeTilePolyData()\n\n"},
  {"MergeTilePolyDataOn", PyvtkCesium3DTilesWriter_MergeTilePolyDataOn, METH_VARARGS,
   "MergeTilePolyDataOn(self) -> None\nC++: virtual void MergeTilePolyDataOn()\n\n"},
  {"MergeTilePolyDataOff", PyvtkCesium3DTilesWriter_MergeTilePolyDataOff, METH_VARARGS,
   "MergeTilePolyDataOff(self) -> None\nC++: virtual void MergeTilePolyDataOff()\n\n"},
  {"SetMergedTextureWidth", PyvtkCesium3DTilesWriter_SetMergedTextureWidth, METH_VARARGS,
   "SetMergedTextureWidth(self, _arg:int) -> None\nC++: virtual void SetMergedTextureWidth(int _arg)\n\n"},
  {"GetMergedTextureWidth", PyvtkCesium3DTilesWriter_GetMergedTextureWidth, METH_VARARGS,
   "GetMergedTextureWidth(self) -> int\nC++: virtual int GetMergedTextureWidth()\n\n"},
  {"SetContentGLTF", PyvtkCesium3DTilesWriter_SetContentGLTF, METH_VARARGS,
   "SetContentGLTF(self, _arg:bool) -> None\nC++: virtual void SetContentGLTF(bool _arg)\n\nWhat is the file type used to save tiles. If ContentGLTF is false\n(the default) we use B3DM for Buildings or Mesh and PNTS for\nPointCloud otherwise  we use GLB or GLTF (3DTILES_content_gltf\nextension, use GLB if ContentGLTFSaveGLB is true (default is\ntrue)). If the file type is B3DM, external programs are needed to\nconvert GLB -> B3DM.\n"},
  {"GetContentGLTF", PyvtkCesium3DTilesWriter_GetContentGLTF, METH_VARARGS,
   "GetContentGLTF(self) -> bool\nC++: virtual bool GetContentGLTF()\n\n"},
  {"ContentGLTFOn", PyvtkCesium3DTilesWriter_ContentGLTFOn, METH_VARARGS,
   "ContentGLTFOn(self) -> None\nC++: virtual void ContentGLTFOn()\n\n"},
  {"ContentGLTFOff", PyvtkCesium3DTilesWriter_ContentGLTFOff, METH_VARARGS,
   "ContentGLTFOff(self) -> None\nC++: virtual void ContentGLTFOff()\n\n"},
  {"SetContentGLTFSaveGLB", PyvtkCesium3DTilesWriter_SetContentGLTFSaveGLB, METH_VARARGS,
   "SetContentGLTFSaveGLB(self, _arg:bool) -> None\nC++: virtual void SetContentGLTFSaveGLB(bool _arg)\n\n"},
  {"GetContentGLTFSaveGLB", PyvtkCesium3DTilesWriter_GetContentGLTFSaveGLB, METH_VARARGS,
   "GetContentGLTFSaveGLB(self) -> bool\nC++: virtual bool GetContentGLTFSaveGLB()\n\n"},
  {"ContentGLTFSaveGLBOn", PyvtkCesium3DTilesWriter_ContentGLTFSaveGLBOn, METH_VARARGS,
   "ContentGLTFSaveGLBOn(self) -> None\nC++: virtual void ContentGLTFSaveGLBOn()\n\n"},
  {"ContentGLTFSaveGLBOff", PyvtkCesium3DTilesWriter_ContentGLTFSaveGLBOff, METH_VARARGS,
   "ContentGLTFSaveGLBOff(self) -> None\nC++: virtual void ContentGLTFSaveGLBOff()\n\n"},
  {"SetInputType", PyvtkCesium3DTilesWriter_SetInputType, METH_VARARGS,
   "SetInputType(self, _arg:int) -> None\nC++: virtual void SetInputType(int _arg)\n\nInput is Buildings, Points or Mesh.\n"},
  {"GetInputType", PyvtkCesium3DTilesWriter_GetInputType, METH_VARARGS,
   "GetInputType(self) -> int\nC++: virtual int GetInputType()\n\n"},
  {"SetNumberOfFeaturesPerTile", PyvtkCesium3DTilesWriter_SetNumberOfFeaturesPerTile, METH_VARARGS,
   "SetNumberOfFeaturesPerTile(self, _arg:int) -> None\nC++: virtual void SetNumberOfFeaturesPerTile(int _arg)\n\nMaximum number of buildings per tile in case of buildings input\nor the number of points per tile in case of point cloud input.\nDefault is 100.\n"},
  {"GetNumberOfFeaturesPerTile", PyvtkCesium3DTilesWriter_GetNumberOfFeaturesPerTile, METH_VARARGS,
   "GetNumberOfFeaturesPerTile(self) -> int\nC++: virtual int GetNumberOfFeaturesPerTile()\n\n"},
  {"SetCRS", PyvtkCesium3DTilesWriter_SetCRS, METH_VARARGS,
   "SetCRS(self, _arg:str) -> None\nC++: virtual void SetCRS(const char *_arg)\n\nSet the coordinate reference system (CRS) also known as spatial\nreference system (SRC), such as EPSG:2263. This string can also\nbe a proj string such as \"+proj=utm +zone=17 +datum=WGS84\"\n"},
  {"GetCRS", PyvtkCesium3DTilesWriter_GetCRS, METH_VARARGS,
   "GetCRS(self) -> str\nC++: virtual char *GetCRS()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCesium3DTilesWriter_Doc =
  "vtkCesium3DTilesWriter - Writes a dataset into 3D Tiles format.\n\n"
  "Superclass: vtkWriter\n\n"
  "Valid inputs include the vtkMultiBlockDataSet (as created by\n"
  "vtkCityGMLReader) storing 3D buildings, vtkPointSet storing a point\n"
  "cloud or vtkPolyData for storing a mesh.\n\n"
  "@sa\n"
  "vtkCityGMLReader vtkMultiBlockDataSet vtkPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCesium3DTilesWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCesium3DTiles.vtkCesium3DTilesWriter", // tp_name
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
  PyvtkCesium3DTilesWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCesium3DTilesWriter_StaticNew()
{
  return vtkCesium3DTilesWriter::New();
}

PyObject *PyvtkCesium3DTilesWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCesium3DTilesWriter_Type, PyvtkCesium3DTilesWriter_Methods,
    "vtkCesium3DTilesWriter",
 &PyvtkCesium3DTilesWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCesium3DTilesWriter_InputType_Type);
  PyVTKEnum_Add(&PyvtkCesium3DTilesWriter_InputType_Type, "vtkCesium3DTilesWriter.InputType");

  o = (PyObject *)&PyvtkCesium3DTilesWriter_InputType_Type;
  if (PyDict_SetItemString(d, "InputType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "Buildings", vtkCesium3DTilesWriter::Buildings },
        { "Points", vtkCesium3DTilesWriter::Points },
        { "Mesh", vtkCesium3DTilesWriter::Mesh },
      };

    o = PyvtkCesium3DTilesWriter_InputType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCesium3DTilesWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCesium3DTilesWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCesium3DTilesWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

