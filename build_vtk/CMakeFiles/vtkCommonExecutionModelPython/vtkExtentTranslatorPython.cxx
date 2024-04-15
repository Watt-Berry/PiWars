// python wrapper for vtkExtentTranslator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtentTranslator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtentTranslator(PyObject *dict); }
extern "C" { PyObject *PyvtkExtentTranslator_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtentTranslator_Modes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkExtentTranslator.Modes", // tp_name
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
PyObject *PyvtkExtentTranslator_Modes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkExtentTranslator_Modes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkExtentTranslator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtentTranslator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtentTranslator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtentTranslator *tempr = vtkExtentTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtentTranslator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtentTranslator::NewInstance());

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
PyvtkExtentTranslator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtentTranslator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtentTranslator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      op->vtkExtentTranslator::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      op->vtkExtentTranslator::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtentTranslator_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkExtentTranslator_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}


static PyObject *
PyvtkExtentTranslator_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkExtentTranslator::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtentTranslator::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkExtentTranslator::SetExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtentTranslator_SetExtent_s1(self, args);
    case 1:
      return PyvtkExtentTranslator_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkExtentTranslator_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkExtentTranslator::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPiece(temp0);
    }
    else
    {
      op->vtkExtentTranslator::SetPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkExtentTranslator::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPieces(temp0);
    }
    else
    {
      op->vtkExtentTranslator::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkExtentTranslator::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostLevel(temp0);
    }
    else
    {
      op->vtkExtentTranslator::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkExtentTranslator::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_PieceToExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->PieceToExtent() :
      op->vtkExtentTranslator::PieceToExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_PieceToExtentByPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentByPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->PieceToExtentByPoints() :
      op->vtkExtentTranslator::PieceToExtentByPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_PieceToExtentThreadSafe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentThreadSafe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkExtentTranslator::PieceToExtentThreadSafe(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSplitModeToBlock();
    }
    else
    {
      op->vtkExtentTranslator::SetSplitModeToBlock();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToXSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToXSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSplitModeToXSlab();
    }
    else
    {
      op->vtkExtentTranslator::SetSplitModeToXSlab();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToYSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToYSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSplitModeToYSlab();
    }
    else
    {
      op->vtkExtentTranslator::SetSplitModeToYSlab();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToZSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToZSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSplitModeToZSlab();
    }
    else
    {
      op->vtkExtentTranslator::SetSplitModeToZSlab();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetSplitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplitMode() :
      op->vtkExtentTranslator::GetSplitMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
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

    if (ap.IsBound())
    {
      op->SetSplitPath(temp0, temp1);
    }
    else
    {
      op->vtkExtentTranslator::SetSplitPath(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentTranslator_UPDATE_SPLIT_MODE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_SPLIT_MODE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerRequestKey *tempr = vtkExtentTranslator::UPDATE_SPLIT_MODE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtentTranslator_Methods[] = {
  {"IsTypeOf", PyvtkExtentTranslator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtentTranslator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtentTranslator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtentTranslator\nC++: static vtkExtentTranslator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtentTranslator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtentTranslator\nC++: vtkExtentTranslator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtentTranslator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtentTranslator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWholeExtent", PyvtkExtentTranslator_SetWholeExtent, METH_VARARGS,
   "SetWholeExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetWholeExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetWholeExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetWholeExtent(const int _arg[6])\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {"GetWholeExtent", PyvtkExtentTranslator_GetWholeExtent, METH_VARARGS,
   "GetWholeExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetWholeExtent()\n\n"},
  {"SetExtent", PyvtkExtentTranslator_SetExtent, METH_VARARGS,
   "SetExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetExtent(const int _arg[6])\n\n"},
  {"GetExtent", PyvtkExtentTranslator_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetExtent()\n\n"},
  {"SetPiece", PyvtkExtentTranslator_SetPiece, METH_VARARGS,
   "SetPiece(self, _arg:int) -> None\nC++: virtual void SetPiece(int _arg)\n\n"},
  {"GetPiece", PyvtkExtentTranslator_GetPiece, METH_VARARGS,
   "GetPiece(self) -> int\nC++: virtual int GetPiece()\n\n"},
  {"SetNumberOfPieces", PyvtkExtentTranslator_SetNumberOfPieces, METH_VARARGS,
   "SetNumberOfPieces(self, _arg:int) -> None\nC++: virtual void SetNumberOfPieces(int _arg)\n\n"},
  {"GetNumberOfPieces", PyvtkExtentTranslator_GetNumberOfPieces, METH_VARARGS,
   "GetNumberOfPieces(self) -> int\nC++: virtual int GetNumberOfPieces()\n\n"},
  {"SetGhostLevel", PyvtkExtentTranslator_SetGhostLevel, METH_VARARGS,
   "SetGhostLevel(self, _arg:int) -> None\nC++: virtual void SetGhostLevel(int _arg)\n\n"},
  {"GetGhostLevel", PyvtkExtentTranslator_GetGhostLevel, METH_VARARGS,
   "GetGhostLevel(self) -> int\nC++: virtual int GetGhostLevel()\n\n"},
  {"PieceToExtent", PyvtkExtentTranslator_PieceToExtent, METH_VARARGS,
   "PieceToExtent(self) -> int\nC++: virtual int PieceToExtent()\n\nThese are the main methods that should be called. These methods\nare responsible for converting a piece to an extent. The\nsignatures without arguments are only thread safe when each\nthread accesses a different instance. The signatures with\narguments are fully thread safe.\n"},
  {"PieceToExtentByPoints", PyvtkExtentTranslator_PieceToExtentByPoints, METH_VARARGS,
   "PieceToExtentByPoints(self) -> int\nC++: virtual int PieceToExtentByPoints()\n\n"},
  {"PieceToExtentThreadSafe", PyvtkExtentTranslator_PieceToExtentThreadSafe, METH_VARARGS,
   "PieceToExtentThreadSafe(self, piece:int, numPieces:int,\n    ghostLevel:int, wholeExtent:[int, ...], resultExtent:[int,\n    ...], splitMode:int, byPoints:int) -> int\nC++: virtual int PieceToExtentThreadSafe(int piece, int numPieces,\n     int ghostLevel, int *wholeExtent, int *resultExtent,\n    int splitMode, int byPoints)\n\n"},
  {"SetSplitModeToBlock", PyvtkExtentTranslator_SetSplitModeToBlock, METH_VARARGS,
   "SetSplitModeToBlock(self) -> None\nC++: void SetSplitModeToBlock()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {"SetSplitModeToXSlab", PyvtkExtentTranslator_SetSplitModeToXSlab, METH_VARARGS,
   "SetSplitModeToXSlab(self) -> None\nC++: void SetSplitModeToXSlab()\n\n"},
  {"SetSplitModeToYSlab", PyvtkExtentTranslator_SetSplitModeToYSlab, METH_VARARGS,
   "SetSplitModeToYSlab(self) -> None\nC++: void SetSplitModeToYSlab()\n\n"},
  {"SetSplitModeToZSlab", PyvtkExtentTranslator_SetSplitModeToZSlab, METH_VARARGS,
   "SetSplitModeToZSlab(self) -> None\nC++: void SetSplitModeToZSlab()\n\n"},
  {"GetSplitMode", PyvtkExtentTranslator_GetSplitMode, METH_VARARGS,
   "GetSplitMode(self) -> int\nC++: virtual int GetSplitMode()\n\n"},
  {"SetSplitPath", PyvtkExtentTranslator_SetSplitPath, METH_VARARGS,
   "SetSplitPath(self, len:int, splitpath:[int, ...]) -> None\nC++: void SetSplitPath(int len, int *splitpath)\n\nBy default the translator creates N structured subextents by\nrepeatedly splitting the largest current dimension until there\nare N pieces. If you do not want it always split the largest\ndimension, for instance when the shortest dimension is the\nslowest changing and thus least coherent in memory, use this to\ntell the translator which dimensions to split.\n"},
  {"UPDATE_SPLIT_MODE", PyvtkExtentTranslator_UPDATE_SPLIT_MODE, METH_VARARGS,
   "UPDATE_SPLIT_MODE() -> vtkInformationIntegerRequestKey\nC++: static vtkInformationIntegerRequestKey *UPDATE_SPLIT_MODE()\n\nKey used to request a particular split mode. This is used by\nvtkStreamingDemandDrivenPipeline.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtentTranslator_Doc =
  "vtkExtentTranslator - Generates a structured extent from unstructured.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkExtentTranslator generates a structured extent from an\n"
  "unstructured extent.  It uses a recursive scheme that splits the\n"
  "largest axis.  A hard coded extent can be used for a starting point.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtentTranslator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkExtentTranslator", // tp_name
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
  PyvtkExtentTranslator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtentTranslator_StaticNew()
{
  return vtkExtentTranslator::New();
}

PyObject *PyvtkExtentTranslator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtentTranslator_Type, PyvtkExtentTranslator_Methods,
    "vtkExtentTranslator",
 &PyvtkExtentTranslator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkExtentTranslator_Modes_Type);
  PyVTKEnum_Add(&PyvtkExtentTranslator_Modes_Type, "vtkExtentTranslator.Modes");

  o = (PyObject *)&PyvtkExtentTranslator_Modes_Type;
  if (PyDict_SetItemString(d, "Modes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkExtentTranslator::Modes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "X_SLAB_MODE", vtkExtentTranslator::X_SLAB_MODE },
        { "Y_SLAB_MODE", vtkExtentTranslator::Y_SLAB_MODE },
        { "Z_SLAB_MODE", vtkExtentTranslator::Z_SLAB_MODE },
        { "BLOCK_MODE", vtkExtentTranslator::BLOCK_MODE },
      };

    o = PyvtkExtentTranslator_Modes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtentTranslator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtentTranslator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtentTranslator", o) != 0)
  {
    Py_DECREF(o);
  }

}

