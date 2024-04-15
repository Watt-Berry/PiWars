// python wrapper for vtkPolyDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyDataMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataMapper_ShiftScaleMethodType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkPolyDataMapper.ShiftScaleMethodType", // tp_name
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
PyObject *PyvtkPolyDataMapper_ShiftScaleMethodType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPolyDataMapper_ShiftScaleMethodType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPolyDataMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataMapper *tempr = vtkPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataMapper::NewInstance());

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
PyvtkPolyDataMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPiece(temp0, temp1);
    }
    else
    {
      op->vtkPolyDataMapper::RenderPiece(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkPolyDataMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPolyDataMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPolyDataMapper::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper_Update_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  vtkInformationVector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0, temp1) :
      op->vtkPolyDataMapper::Update(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper_Update_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkPolyDataMapper::Update(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataMapper_Update_Methods[] = {
  {"Update", PyvtkPolyDataMapper_Update_s1, METH_VARARGS,
   "@i"},
  {"Update", PyvtkPolyDataMapper_Update_s4, METH_VARARGS,
   "@V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyDataMapper_Update(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyDataMapper_Update_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolyDataMapper_Update_s2(self, args);
    case 2:
      return PyvtkPolyDataMapper_Update_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}


static PyObject *
PyvtkPolyDataMapper_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

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
      op->vtkPolyDataMapper::SetPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkPolyDataMapper::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

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
      op->vtkPolyDataMapper::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPolyDataMapper::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSubPieces(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetNumberOfSubPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetNumberOfSubPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubPieces() :
      op->vtkPolyDataMapper::GetNumberOfSubPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

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
      op->vtkPolyDataMapper::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkPolyDataMapper::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetSeamlessU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeamlessU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeamlessU(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetSeamlessU(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetSeamlessU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeamlessU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSeamlessU() :
      op->vtkPolyDataMapper::GetSeamlessU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SeamlessUOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeamlessUOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SeamlessUOn();
    }
    else
    {
      op->vtkPolyDataMapper::SeamlessUOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SeamlessUOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeamlessUOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SeamlessUOff();
    }
    else
    {
      op->vtkPolyDataMapper::SeamlessUOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetSeamlessV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeamlessV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeamlessV(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetSeamlessV(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetSeamlessV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeamlessV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSeamlessV() :
      op->vtkPolyDataMapper::GetSeamlessV());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SeamlessVOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeamlessVOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SeamlessVOn();
    }
    else
    {
      op->vtkPolyDataMapper::SeamlessVOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SeamlessVOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeamlessVOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SeamlessVOff();
    }
    else
    {
      op->vtkPolyDataMapper::SeamlessVOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPolyDataMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::GetBounds(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolyDataMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkPolyDataMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkPolyDataMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_MapDataArrayToVertexAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToVertexAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPolyDataMapper::MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_MapDataArrayToMultiTextureAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToMultiTextureAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPolyDataMapper::MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_RemoveVertexAttributeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertexAttributeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveVertexAttributeMapping(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::RemoveVertexAttributeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_RemoveAllVertexAttributeMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVertexAttributeMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVertexAttributeMappings();
    }
    else
    {
      op->vtkPolyDataMapper::RemoveAllVertexAttributeMappings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetVBOShiftScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVBOShiftScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVBOShiftScaleMethod(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetVBOShiftScaleMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetVBOShiftScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVBOShiftScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVBOShiftScaleMethod() :
      op->vtkPolyDataMapper::GetVBOShiftScaleMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_SetPauseShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPauseShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPauseShiftScale(temp0);
    }
    else
    {
      op->vtkPolyDataMapper::SetPauseShiftScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_GetPauseShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPauseShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPauseShiftScale() :
      op->vtkPolyDataMapper::GetPauseShiftScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_PauseShiftScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PauseShiftScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PauseShiftScaleOn();
    }
    else
    {
      op->vtkPolyDataMapper::PauseShiftScaleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper_PauseShiftScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PauseShiftScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper *op = static_cast<vtkPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PauseShiftScaleOff();
    }
    else
    {
      op->vtkPolyDataMapper::PauseShiftScaleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyDataMapper\nC++: static vtkPolyDataMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataMapper\nC++: vtkPolyDataMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderPiece", PyvtkPolyDataMapper_RenderPiece, METH_VARARGS,
   "RenderPiece(self, __a:vtkRenderer, __b:vtkActor) -> None\nC++: virtual void RenderPiece(vtkRenderer *, vtkActor *)\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"Render", PyvtkPolyDataMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nThis calls RenderPiece (in a for loop if streaming is necessary).\n"},
  {"SetInputData", PyvtkPolyDataMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, in_:vtkPolyData) -> None\nC++: void SetInputData(vtkPolyData *in)\n\nSpecify the input data to map.\n"},
  {"GetInput", PyvtkPolyDataMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nGet the input as a vtkDataSet.  This method is overridden in the\nspecialized mapper classes to return more specific data types.\n"},
  {"Update", PyvtkPolyDataMapper_Update, METH_VARARGS,
   "Update(self, port:int) -> None\nC++: void Update(int port) override;\nUpdate(self) -> None\nC++: void Update() override;\nUpdate(self, port:int, requests:vtkInformationVector) -> int\nC++: vtkTypeBool Update(int port, vtkInformationVector *requests)\n    override;\nUpdate(self, requests:vtkInformation) -> int\nC++: vtkTypeBool Update(vtkInformation *requests) override;\n\nBring this algorithm's outputs up-to-date.\n"},
  {"SetPiece", PyvtkPolyDataMapper_SetPiece, METH_VARARGS,
   "SetPiece(self, _arg:int) -> None\nC++: virtual void SetPiece(int _arg)\n\nIf you want only a part of the data, specify by setting the\npiece.\n"},
  {"GetPiece", PyvtkPolyDataMapper_GetPiece, METH_VARARGS,
   "GetPiece(self) -> int\nC++: virtual int GetPiece()\n\n"},
  {"SetNumberOfPieces", PyvtkPolyDataMapper_SetNumberOfPieces, METH_VARARGS,
   "SetNumberOfPieces(self, _arg:int) -> None\nC++: virtual void SetNumberOfPieces(int _arg)\n\n"},
  {"GetNumberOfPieces", PyvtkPolyDataMapper_GetNumberOfPieces, METH_VARARGS,
   "GetNumberOfPieces(self) -> int\nC++: virtual int GetNumberOfPieces()\n\n"},
  {"SetNumberOfSubPieces", PyvtkPolyDataMapper_SetNumberOfSubPieces, METH_VARARGS,
   "SetNumberOfSubPieces(self, _arg:int) -> None\nC++: virtual void SetNumberOfSubPieces(int _arg)\n\n"},
  {"GetNumberOfSubPieces", PyvtkPolyDataMapper_GetNumberOfSubPieces, METH_VARARGS,
   "GetNumberOfSubPieces(self) -> int\nC++: virtual int GetNumberOfSubPieces()\n\n"},
  {"SetGhostLevel", PyvtkPolyDataMapper_SetGhostLevel, METH_VARARGS,
   "SetGhostLevel(self, _arg:int) -> None\nC++: virtual void SetGhostLevel(int _arg)\n\nSet the number of ghost cells to return.\n"},
  {"GetGhostLevel", PyvtkPolyDataMapper_GetGhostLevel, METH_VARARGS,
   "GetGhostLevel(self) -> int\nC++: virtual int GetGhostLevel()\n\n"},
  {"SetSeamlessU", PyvtkPolyDataMapper_SetSeamlessU, METH_VARARGS,
   "SetSeamlessU(self, _arg:bool) -> None\nC++: virtual void SetSeamlessU(bool _arg)\n\nAccessors / Mutators for handling seams on wrapping surfaces.\nLetters U and V stand for texture coordinates (u,v).\n\note Implementation taken from the work of Marco Tarini:\nCylindrical and Toroidal Parameterizations Without Vertex Seams\nJournal of Graphics Tools, 2012, number 3, volume 16, pages\n144-150.\n"},
  {"GetSeamlessU", PyvtkPolyDataMapper_GetSeamlessU, METH_VARARGS,
   "GetSeamlessU(self) -> bool\nC++: virtual bool GetSeamlessU()\n\n"},
  {"SeamlessUOn", PyvtkPolyDataMapper_SeamlessUOn, METH_VARARGS,
   "SeamlessUOn(self) -> None\nC++: virtual void SeamlessUOn()\n\n"},
  {"SeamlessUOff", PyvtkPolyDataMapper_SeamlessUOff, METH_VARARGS,
   "SeamlessUOff(self) -> None\nC++: virtual void SeamlessUOff()\n\n"},
  {"SetSeamlessV", PyvtkPolyDataMapper_SetSeamlessV, METH_VARARGS,
   "SetSeamlessV(self, _arg:bool) -> None\nC++: virtual void SetSeamlessV(bool _arg)\n\n"},
  {"GetSeamlessV", PyvtkPolyDataMapper_GetSeamlessV, METH_VARARGS,
   "GetSeamlessV(self) -> bool\nC++: virtual bool GetSeamlessV()\n\n"},
  {"SeamlessVOn", PyvtkPolyDataMapper_SeamlessVOn, METH_VARARGS,
   "SeamlessVOn(self) -> None\nC++: virtual void SeamlessVOn()\n\n"},
  {"SeamlessVOff", PyvtkPolyDataMapper_SeamlessVOff, METH_VARARGS,
   "SeamlessVOff(self) -> None\nC++: virtual void SeamlessVOff()\n\n"},
  {"GetBounds", PyvtkPolyDataMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"ShallowCopy", PyvtkPolyDataMapper_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, m:vtkAbstractMapper) -> None\nC++: void ShallowCopy(vtkAbstractMapper *m) override;\n\nMake a shallow copy of this mapper.\n"},
  {"MapDataArrayToVertexAttribute", PyvtkPolyDataMapper_MapDataArrayToVertexAttribute, METH_VARARGS,
   "MapDataArrayToVertexAttribute(self, vertexAttributeName:str,\n    dataArrayName:str, fieldAssociation:int, componentno:int=-1)\n    -> None\nC++: virtual void MapDataArrayToVertexAttribute(\n    const char *vertexAttributeName, const char *dataArrayName,\n    int fieldAssociation, int componentno=-1)\n\nSelect a data array from the point/cell data and map it to a\ngeneric vertex attribute. vertexAttributeName is the name of the\nvertex attribute. dataArrayName is the name of the data array.\nfieldAssociation indicates when the data array is a point data\narray or cell data array (vtkDataObject::FIELD_ASSOCIATION_POINTS\nor (vtkDataObject::FIELD_ASSOCIATION_CELLS). componentno\nindicates which component from the data array must be passed as\nthe attribute. If -1, then all components are passed. Currently\nonly point data is supported.\n"},
  {"MapDataArrayToMultiTextureAttribute", PyvtkPolyDataMapper_MapDataArrayToMultiTextureAttribute, METH_VARARGS,
   "MapDataArrayToMultiTextureAttribute(self, textureName:str,\n    dataArrayName:str, fieldAssociation:int, componentno:int=-1)\n    -> None\nC++: virtual void MapDataArrayToMultiTextureAttribute(\n    const char *textureName, const char *dataArrayName,\n    int fieldAssociation, int componentno=-1)\n\n"},
  {"RemoveVertexAttributeMapping", PyvtkPolyDataMapper_RemoveVertexAttributeMapping, METH_VARARGS,
   "RemoveVertexAttributeMapping(self, vertexAttributeName:str)\n    -> None\nC++: virtual void RemoveVertexAttributeMapping(\n    const char *vertexAttributeName)\n\nRemove a vertex attribute mapping.\n"},
  {"RemoveAllVertexAttributeMappings", PyvtkPolyDataMapper_RemoveAllVertexAttributeMappings, METH_VARARGS,
   "RemoveAllVertexAttributeMappings(self) -> None\nC++: virtual void RemoveAllVertexAttributeMappings()\n\nRemove all vertex attributes.\n"},
  {"SetVBOShiftScaleMethod", PyvtkPolyDataMapper_SetVBOShiftScaleMethod, METH_VARARGS,
   "SetVBOShiftScaleMethod(self, __a:int) -> None\nC++: virtual void SetVBOShiftScaleMethod(int)\n\nA convenience method for enabling/disabling\nthe VBO's shift+scale transform.\n"},
  {"GetVBOShiftScaleMethod", PyvtkPolyDataMapper_GetVBOShiftScaleMethod, METH_VARARGS,
   "GetVBOShiftScaleMethod(self) -> int\nC++: virtual int GetVBOShiftScaleMethod()\n\n"},
  {"SetPauseShiftScale", PyvtkPolyDataMapper_SetPauseShiftScale, METH_VARARGS,
   "SetPauseShiftScale(self, pauseShiftScale:bool) -> None\nC++: virtual void SetPauseShiftScale(bool pauseShiftScale)\n\nPause per-render updates to VBO shift+scale parameters.\n\nFor large datasets, re-uploading the VBO during user interaction\ncan cause stutters in the framerate. Interactors can use this\nmethod to force UpdateCameraShiftScale to return immediately\n(without changes) while users are zooming/rotating/etc. and then\nre-enable shift-scale just before a still render.\n\nThis setting has no effect unless the shift-scale method is set\nto NEAR_PLANE_SHIFT_SCALE or FOCAL_POINT_SHIFT_SCALE.\n\nChanging this setting does **not** mark the mapper as modified as\nthat would force a VBO upload \342\200\223 defeating its own purpose.\n"},
  {"GetPauseShiftScale", PyvtkPolyDataMapper_GetPauseShiftScale, METH_VARARGS,
   "GetPauseShiftScale(self) -> bool\nC++: virtual bool GetPauseShiftScale()\n\n"},
  {"PauseShiftScaleOn", PyvtkPolyDataMapper_PauseShiftScaleOn, METH_VARARGS,
   "PauseShiftScaleOn(self) -> None\nC++: virtual void PauseShiftScaleOn()\n\n"},
  {"PauseShiftScaleOff", PyvtkPolyDataMapper_PauseShiftScaleOff, METH_VARARGS,
   "PauseShiftScaleOff(self) -> None\nC++: virtual void PauseShiftScaleOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataMapper_Doc =
  "vtkPolyDataMapper - map vtkPolyData to graphics primitives\n\n"
  "Superclass: vtkMapper\n\n"
  "vtkPolyDataMapper is a class that maps polygonal data (i.e.,\n"
  "vtkPolyData) to graphics primitives. vtkPolyDataMapper serves as a\n"
  "superclass for device-specific poly data mappers, that actually do\n"
  "the mapping to the rendering/graphics hardware/software.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkPolyDataMapper", // tp_name
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
  PyvtkPolyDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataMapper_StaticNew()
{
  return vtkPolyDataMapper::New();
}

PyObject *PyvtkPolyDataMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataMapper_Type, PyvtkPolyDataMapper_Methods,
    "vtkPolyDataMapper",
 &PyvtkPolyDataMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPolyDataMapper_ShiftScaleMethodType_Type);
  PyVTKEnum_Add(&PyvtkPolyDataMapper_ShiftScaleMethodType_Type, "vtkPolyDataMapper.ShiftScaleMethodType");

  o = (PyObject *)&PyvtkPolyDataMapper_ShiftScaleMethodType_Type;
  if (PyDict_SetItemString(d, "ShiftScaleMethodType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkPolyDataMapper::ShiftScaleMethodType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "DISABLE_SHIFT_SCALE", vtkPolyDataMapper::DISABLE_SHIFT_SCALE },
        { "AUTO_SHIFT_SCALE", vtkPolyDataMapper::AUTO_SHIFT_SCALE },
        { "ALWAYS_AUTO_SHIFT_SCALE", vtkPolyDataMapper::ALWAYS_AUTO_SHIFT_SCALE },
        { "MANUAL_SHIFT_SCALE", vtkPolyDataMapper::MANUAL_SHIFT_SCALE },
        { "AUTO_SHIFT", vtkPolyDataMapper::AUTO_SHIFT },
        { "NEAR_PLANE_SHIFT_SCALE", vtkPolyDataMapper::NEAR_PLANE_SHIFT_SCALE },
        { "FOCAL_POINT_SHIFT_SCALE", vtkPolyDataMapper::FOCAL_POINT_SHIFT_SCALE },
      };

    o = PyvtkPolyDataMapper_ShiftScaleMethodType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

