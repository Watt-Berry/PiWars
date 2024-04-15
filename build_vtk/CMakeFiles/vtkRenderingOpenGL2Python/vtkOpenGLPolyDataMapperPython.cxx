// python wrapper for vtkOpenGLPolyDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLPolyDataMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLPolyDataMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLPolyDataMapper_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLPolyDataMapper.PrimitiveTypes", // tp_name
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
PyObject *PyvtkOpenGLPolyDataMapper_PrimitiveTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLPolyDataMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLPolyDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLPolyDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLPolyDataMapper *tempr = vtkOpenGLPolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLPolyDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLPolyDataMapper::NewInstance());

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
PyvtkOpenGLPolyDataMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLPolyDataMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLPolyDataMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::RenderPiece(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RenderPieceStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceStart(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RenderPieceStart(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RenderPieceDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceDraw(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RenderPieceDraw(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RenderPieceFinish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPieceFinish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPieceFinish(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RenderPieceFinish(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetPopulateSelectionSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPopulateSelectionSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPopulateSelectionSettings() :
      op->vtkOpenGLPolyDataMapper::GetPopulateSelectionSettings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetPopulateSelectionSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPopulateSelectionSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPopulateSelectionSettings(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetPopulateSelectionSettings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkOpenGLPolyDataMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetPointIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIdArrayName(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetPointIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetPointIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPointIdArrayName() :
      op->vtkOpenGLPolyDataMapper::GetPointIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIdArrayName(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetCellIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCellIdArrayName() :
      op->vtkOpenGLPolyDataMapper::GetCellIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetProcessIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessIdArrayName(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetProcessIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetProcessIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetProcessIdArrayName() :
      op->vtkOpenGLPolyDataMapper::GetProcessIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetCompositeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeIdArrayName(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetCompositeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetCompositeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCompositeIdArrayName() :
      op->vtkOpenGLPolyDataMapper::GetCompositeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetVBOs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVBOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObjectGroup *tempr = (ap.IsBound() ?
      op->GetVBOs() :
      op->vtkOpenGLPolyDataMapper::GetVBOs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetVBOShiftScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVBOShiftScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::SetVBOShiftScaleMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_GetUseProgramPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseProgramPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseProgramPointSize() :
      op->vtkOpenGLPolyDataMapper::GetUseProgramPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_SetUseProgramPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseProgramPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseProgramPointSize(temp0);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::SetUseProgramPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_UseProgramPointSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProgramPointSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseProgramPointSizeOn();
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::UseProgramPointSizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_UseProgramPointSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseProgramPointSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseProgramPointSizeOff();
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::UseProgramPointSizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_MapDataArrayToVertexAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToVertexAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::MapDataArrayToVertexAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_MapDataArrayToMultiTextureAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapDataArrayToMultiTextureAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::MapDataArrayToMultiTextureAttribute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RemoveVertexAttributeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertexAttributeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

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
      op->vtkOpenGLPolyDataMapper::RemoveVertexAttributeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_RemoveAllVertexAttributeMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVertexAttributeMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVertexAttributeMappings();
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::RemoveAllVertexAttributeMappings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLPolyDataMapper_ProcessSelectorPixelBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessSelectorPixelBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLPolyDataMapper *op = static_cast<vtkOpenGLPolyDataMapper *>(vp);

  vtkHardwareSelector *temp0 = nullptr;
  std::vector<unsigned int> temp1(ap.GetArgSize(1));
  vtkProp *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkHardwareSelector") &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      ap.GetVTKObject(temp2, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLPolyDataMapper::ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLPolyDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLPolyDataMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLPolyDataMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLPolyDataMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLPolyDataMapper\nC++: static vtkOpenGLPolyDataMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLPolyDataMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLPolyDataMapper\nC++: vtkOpenGLPolyDataMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLPolyDataMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLPolyDataMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderPiece", PyvtkOpenGLPolyDataMapper_RenderPiece, METH_VARARGS,
   "RenderPiece(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void RenderPiece(vtkRenderer *ren, vtkActor *act) override;\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"RenderPieceStart", PyvtkOpenGLPolyDataMapper_RenderPieceStart, METH_VARARGS,
   "RenderPieceStart(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: virtual void RenderPieceStart(vtkRenderer *ren,\n    vtkActor *act)\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"RenderPieceDraw", PyvtkOpenGLPolyDataMapper_RenderPieceDraw, METH_VARARGS,
   "RenderPieceDraw(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: virtual void RenderPieceDraw(vtkRenderer *ren, vtkActor *act)\n\n"},
  {"RenderPieceFinish", PyvtkOpenGLPolyDataMapper_RenderPieceFinish, METH_VARARGS,
   "RenderPieceFinish(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: virtual void RenderPieceFinish(vtkRenderer *ren,\n    vtkActor *act)\n\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLPolyDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetPopulateSelectionSettings", PyvtkOpenGLPolyDataMapper_GetPopulateSelectionSettings, METH_VARARGS,
   "GetPopulateSelectionSettings(self) -> int\nC++: virtual int GetPopulateSelectionSettings()\n\n"},
  {"SetPopulateSelectionSettings", PyvtkOpenGLPolyDataMapper_SetPopulateSelectionSettings, METH_VARARGS,
   "SetPopulateSelectionSettings(self, v:int) -> None\nC++: void SetPopulateSelectionSettings(int v)\n\n"},
  {"GetSupportsSelection", PyvtkOpenGLPolyDataMapper_GetSupportsSelection, METH_VARARGS,
   "GetSupportsSelection(self) -> bool\nC++: bool GetSupportsSelection() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {"SetPointIdArrayName", PyvtkOpenGLPolyDataMapper_SetPointIdArrayName, METH_VARARGS,
   "SetPointIdArrayName(self, _arg:str) -> None\nC++: virtual void SetPointIdArrayName(const char *_arg)\n\nBy default, this class uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {"GetPointIdArrayName", PyvtkOpenGLPolyDataMapper_GetPointIdArrayName, METH_VARARGS,
   "GetPointIdArrayName(self) -> str\nC++: virtual char *GetPointIdArrayName()\n\n"},
  {"SetCellIdArrayName", PyvtkOpenGLPolyDataMapper_SetCellIdArrayName, METH_VARARGS,
   "SetCellIdArrayName(self, _arg:str) -> None\nC++: virtual void SetCellIdArrayName(const char *_arg)\n\n"},
  {"GetCellIdArrayName", PyvtkOpenGLPolyDataMapper_GetCellIdArrayName, METH_VARARGS,
   "GetCellIdArrayName(self) -> str\nC++: virtual char *GetCellIdArrayName()\n\n"},
  {"SetProcessIdArrayName", PyvtkOpenGLPolyDataMapper_SetProcessIdArrayName, METH_VARARGS,
   "SetProcessIdArrayName(self, _arg:str) -> None\nC++: virtual void SetProcessIdArrayName(const char *_arg)\n\nIf this class should override the process id using a data-array,\nset this variable to the name of the array to use. It must be a\npoint-array.\n"},
  {"GetProcessIdArrayName", PyvtkOpenGLPolyDataMapper_GetProcessIdArrayName, METH_VARARGS,
   "GetProcessIdArrayName(self) -> str\nC++: virtual char *GetProcessIdArrayName()\n\n"},
  {"SetCompositeIdArrayName", PyvtkOpenGLPolyDataMapper_SetCompositeIdArrayName, METH_VARARGS,
   "SetCompositeIdArrayName(self, _arg:str) -> None\nC++: virtual void SetCompositeIdArrayName(const char *_arg)\n\nGenerally, this class can render the composite id when iterating\nover composite datasets. However in some cases (as in AMR), the\nrendered structure may not correspond to the input data, in which\ncase we need to provide a cell array that can be used to render\nin the composite id in selection passes. Set to NULL (default) to\nnot override the composite id color set by vtkCompositePainter if\nany. The array *MUST* be a cell array and of type\nvtkUnsignedIntArray.\n"},
  {"GetCompositeIdArrayName", PyvtkOpenGLPolyDataMapper_GetCompositeIdArrayName, METH_VARARGS,
   "GetCompositeIdArrayName(self) -> str\nC++: virtual char *GetCompositeIdArrayName()\n\n"},
  {"ShallowCopy", PyvtkOpenGLPolyDataMapper_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, m:vtkAbstractMapper) -> None\nC++: void ShallowCopy(vtkAbstractMapper *m) override;\n\nMake a shallow copy of this mapper.\n"},
  {"GetVBOs", PyvtkOpenGLPolyDataMapper_GetVBOs, METH_VARARGS,
   "GetVBOs(self) -> vtkOpenGLVertexBufferObjectGroup\nC++: virtual vtkOpenGLVertexBufferObjectGroup *GetVBOs()\n\nReturn the mapper's vertex buffer objects.\n"},
  {"SetVBOShiftScaleMethod", PyvtkOpenGLPolyDataMapper_SetVBOShiftScaleMethod, METH_VARARGS,
   "SetVBOShiftScaleMethod(self, method:int) -> None\nC++: void SetVBOShiftScaleMethod(int method) override;\n\nA convenience method for enabling/disabling\nthe VBO's shift+scale transform.\n"},
  {"GetUseProgramPointSize", PyvtkOpenGLPolyDataMapper_GetUseProgramPointSize, METH_VARARGS,
   "GetUseProgramPointSize(self) -> bool\nC++: virtual bool GetUseProgramPointSize()\n\nAllow the shader code to set the point size (with gl_PointSize\nvariable) instead of using the one defined by the property. Note\nthat this flag is not available on OpenGLES as the feature is\nenabled by default. With OpenGL, the feature is turned off by\ndefault. Warning: on MacOS, enabling the feature result in non\npoint drawing if the shaders do not set the point size.\n"},
  {"SetUseProgramPointSize", PyvtkOpenGLPolyDataMapper_SetUseProgramPointSize, METH_VARARGS,
   "SetUseProgramPointSize(self, _arg:bool) -> None\nC++: virtual void SetUseProgramPointSize(bool _arg)\n\n"},
  {"UseProgramPointSizeOn", PyvtkOpenGLPolyDataMapper_UseProgramPointSizeOn, METH_VARARGS,
   "UseProgramPointSizeOn(self) -> None\nC++: virtual void UseProgramPointSizeOn()\n\n"},
  {"UseProgramPointSizeOff", PyvtkOpenGLPolyDataMapper_UseProgramPointSizeOff, METH_VARARGS,
   "UseProgramPointSizeOff(self) -> None\nC++: virtual void UseProgramPointSizeOff()\n\n"},
  {"MapDataArrayToVertexAttribute", PyvtkOpenGLPolyDataMapper_MapDataArrayToVertexAttribute, METH_VARARGS,
   "MapDataArrayToVertexAttribute(self, vertexAttributeName:str,\n    dataArrayName:str, fieldAssociation:int, componentno:int=-1)\n    -> None\nC++: void MapDataArrayToVertexAttribute(\n    const char *vertexAttributeName, const char *dataArrayName,\n    int fieldAssociation, int componentno=-1) override;\n\nSelect a data array from the point/cell data and map it to a\ngeneric vertex attribute. vertexAttributeName is the name of the\nvertex attribute. dataArrayName is the name of the data array.\nfieldAssociation indicates when the data array is a point data\narray or cell data array (vtkDataObject::FIELD_ASSOCIATION_POINTS\nor (vtkDataObject::FIELD_ASSOCIATION_CELLS). componentno\nindicates which component from the data array must be passed as\nthe attribute. If -1, then all components are passed.\n"},
  {"MapDataArrayToMultiTextureAttribute", PyvtkOpenGLPolyDataMapper_MapDataArrayToMultiTextureAttribute, METH_VARARGS,
   "MapDataArrayToMultiTextureAttribute(self, tname:str,\n    dataArrayName:str, fieldAssociation:int, componentno:int=-1)\n    -> None\nC++: void MapDataArrayToMultiTextureAttribute(const char *tname,\n    const char *dataArrayName, int fieldAssociation,\n    int componentno=-1) override;\n\n"},
  {"RemoveVertexAttributeMapping", PyvtkOpenGLPolyDataMapper_RemoveVertexAttributeMapping, METH_VARARGS,
   "RemoveVertexAttributeMapping(self, vertexAttributeName:str)\n    -> None\nC++: void RemoveVertexAttributeMapping(\n    const char *vertexAttributeName) override;\n\nRemove a vertex attribute mapping.\n"},
  {"RemoveAllVertexAttributeMappings", PyvtkOpenGLPolyDataMapper_RemoveAllVertexAttributeMappings, METH_VARARGS,
   "RemoveAllVertexAttributeMappings(self) -> None\nC++: void RemoveAllVertexAttributeMappings() override;\n\nRemove all vertex attributes.\n"},
  {"ProcessSelectorPixelBuffers", PyvtkOpenGLPolyDataMapper_ProcessSelectorPixelBuffers, METH_VARARGS,
   "ProcessSelectorPixelBuffers(self, sel:vtkHardwareSelector,\n    pixeloffsets:[int, ...], prop:vtkProp) -> None\nC++: void ProcessSelectorPixelBuffers(vtkHardwareSelector *sel,\n    std::vector<unsigned int> &pixeloffsets, vtkProp *prop)\n    override;\n\nallows a mapper to update a selections color buffers Called from\na prop which in turn is called from the selector\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLPolyDataMapper_Doc =
  "vtkOpenGLPolyDataMapper - PolyDataMapper using OpenGL to render.\n\n"
  "Superclass: vtkPolyDataMapper\n\n"
  "PolyDataMapper that uses a OpenGL to do the actual rendering.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLPolyDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLPolyDataMapper", // tp_name
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
  PyvtkOpenGLPolyDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLPolyDataMapper_StaticNew()
{
  return vtkOpenGLPolyDataMapper::New();
}

PyObject *PyvtkOpenGLPolyDataMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLPolyDataMapper_Type, PyvtkOpenGLPolyDataMapper_Methods,
    "vtkOpenGLPolyDataMapper",
 &PyvtkOpenGLPolyDataMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataMapper");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type);
  PyVTKEnum_Add(&PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type, "vtkOpenGLPolyDataMapper.PrimitiveTypes");

  o = (PyObject *)&PyvtkOpenGLPolyDataMapper_PrimitiveTypes_Type;
  if (PyDict_SetItemString(d, "PrimitiveTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkOpenGLPolyDataMapper::PrimitiveTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "PrimitiveStart", vtkOpenGLPolyDataMapper::PrimitiveStart },
        { "PrimitivePoints", vtkOpenGLPolyDataMapper::PrimitivePoints },
        { "PrimitiveLines", vtkOpenGLPolyDataMapper::PrimitiveLines },
        { "PrimitiveTris", vtkOpenGLPolyDataMapper::PrimitiveTris },
        { "PrimitiveTriStrips", vtkOpenGLPolyDataMapper::PrimitiveTriStrips },
        { "PrimitiveVertices", vtkOpenGLPolyDataMapper::PrimitiveVertices },
        { "PrimitiveEnd", vtkOpenGLPolyDataMapper::PrimitiveEnd },
      };

    o = PyvtkOpenGLPolyDataMapper_PrimitiveTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLPolyDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLPolyDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLPolyDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

