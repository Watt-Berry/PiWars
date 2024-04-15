// python wrapper for vtkHardwareSelector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHardwareSelector.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHardwareSelector(PyObject *dict); }
extern "C" { PyObject *PyvtkHardwareSelector_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHardwareSelector_PassTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkHardwareSelector.PassTypes", // tp_name
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
PyObject *PyvtkHardwareSelector_PassTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHardwareSelector_PassTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkHardwareSelector_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHardwareSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHardwareSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHardwareSelector *tempr = vtkHardwareSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHardwareSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHardwareSelector::NewInstance());

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
PyvtkHardwareSelector_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHardwareSelector::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHardwareSelector::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkHardwareSelector::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetArea_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetArea(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHardwareSelector::SetArea(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetArea_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  const size_t size0 = 4;
  unsigned int temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetArea(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SetArea(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetArea(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkHardwareSelector_SetArea_s1(self, args);
    case 1:
      return PyvtkHardwareSelector_SetArea_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetArea");
  return nullptr;
}


static PyObject *
PyvtkHardwareSelector_GetArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetArea() :
      op->vtkHardwareSelector::GetArea());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldAssociation(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SetFieldAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkHardwareSelector::GetFieldAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetUseProcessIdFromData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseProcessIdFromData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseProcessIdFromData(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SetUseProcessIdFromData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetUseProcessIdFromData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseProcessIdFromData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseProcessIdFromData() :
      op->vtkHardwareSelector::GetUseProcessIdFromData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_Select(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->Select() :
      op->vtkHardwareSelector::Select());

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
PyvtkHardwareSelector_CaptureBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CaptureBuffers() :
      op->vtkHardwareSelector::CaptureBuffers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_ClearBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearBuffers();
    }
    else
    {
      op->vtkHardwareSelector::ClearBuffers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetRawPixelBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRawPixelBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetRawPixelBuffer(temp0) :
      op->vtkHardwareSelector::GetRawPixelBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetPixelBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetPixelBuffer(temp0) :
      op->vtkHardwareSelector::GetPixelBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_RenderCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RenderCompositeIndex(temp0);
    }
    else
    {
      op->vtkHardwareSelector::RenderCompositeIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_UpdateMaximumCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateMaximumCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateMaximumCellId(temp0);
    }
    else
    {
      op->vtkHardwareSelector::UpdateMaximumCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_UpdateMaximumPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateMaximumPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateMaximumPointId(temp0);
    }
    else
    {
      op->vtkHardwareSelector::UpdateMaximumPointId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_RenderProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RenderProcessId(temp0);
    }
    else
    {
      op->vtkHardwareSelector::RenderProcessId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetActorPassOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActorPassOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetActorPassOnly() :
      op->vtkHardwareSelector::GetActorPassOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetActorPassOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActorPassOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActorPassOnly(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SetActorPassOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetCaptureZValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptureZValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCaptureZValues() :
      op->vtkHardwareSelector::GetCaptureZValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetCaptureZValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptureZValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaptureZValues(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SetCaptureZValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_BeginRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BeginRenderProp();
    }
    else
    {
      op->vtkHardwareSelector::BeginRenderProp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_EndRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndRenderProp();
    }
    else
    {
      op->vtkHardwareSelector::EndRenderProp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessID(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SetProcessID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessID() :
      op->vtkHardwareSelector::GetProcessID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetPropColorValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropColorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPropColorValue() :
      op->vtkHardwareSelector::GetPropColorValue());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetPropColorValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropColorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetPropColorValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHardwareSelector::SetPropColorValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetPropColorValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropColorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPropColorValue(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SetPropColorValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetPropColorValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropColorValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPropColorValue(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SetPropColorValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHardwareSelector_SetPropColorValue_Methods[] = {
  {"SetPropColorValue", PyvtkHardwareSelector_SetPropColorValue_s2, METH_VARARGS,
   "@P *f"},
  {"SetPropColorValue", PyvtkHardwareSelector_SetPropColorValue_s3, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHardwareSelector_SetPropColorValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHardwareSelector_SetPropColorValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHardwareSelector_SetPropColorValue_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPropColorValue");
  return nullptr;
}


static PyObject *
PyvtkHardwareSelector_GetCurrentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentPass() :
      op->vtkHardwareSelector::GetCurrentPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GenerateSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GenerateSelection() :
      op->vtkHardwareSelector::GenerateSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHardwareSelector_GenerateSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  const size_t size0 = 4;
  unsigned int temp0[4];
  unsigned int save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkSelection *tempr = (ap.IsBound() ?
      op->GenerateSelection(temp0) :
      op->vtkHardwareSelector::GenerateSelection(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHardwareSelector_GenerateSelection_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GenerateSelection(temp0, temp1, temp2, temp3) :
      op->vtkHardwareSelector::GenerateSelection(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHardwareSelector_GenerateSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHardwareSelector_GenerateSelection_s1(self, args);
    case 1:
      return PyvtkHardwareSelector_GenerateSelection_s2(self, args);
    case 4:
      return PyvtkHardwareSelector_GenerateSelection_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateSelection");
  return nullptr;
}


static PyObject *
PyvtkHardwareSelector_GeneratePolygonSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkSelection *tempr = (ap.IsBound() ?
      op->GeneratePolygonSelection(temp0, temp1) :
      op->vtkHardwareSelector::GeneratePolygonSelection(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetPropFromID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropFromID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetPropFromID(temp0) :
      op->vtkHardwareSelector::GetPropFromID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_PassTypeToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassTypeToString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  typedef vtkHardwareSelector::PassTypes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkHardwareSelector.PassTypes"))
  {
    std::string tempr = (ap.IsBound() ?
      op->PassTypeToString(temp0) :
      op->vtkHardwareSelector::PassTypeToString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_Convert(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Convert");

  long long temp0;
  const size_t size1 = 3;
  float temp1[3];
  float save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkHardwareSelector::Convert(temp0, temp1);

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
PyvtkHardwareSelector_SavePixelBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SavePixelBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SavePixelBuffer(temp0);
    }
    else
    {
      op->vtkHardwareSelector::SavePixelBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_HasHighCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasHighCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasHighCellIds() :
      op->vtkHardwareSelector::HasHighCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHardwareSelector_HasHighPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasHighPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasHighPointIds() :
      op->vtkHardwareSelector::HasHighPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHardwareSelector_Methods[] = {
  {"IsTypeOf", PyvtkHardwareSelector_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHardwareSelector_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHardwareSelector_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHardwareSelector\nC++: static vtkHardwareSelector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHardwareSelector_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHardwareSelector\nC++: vtkHardwareSelector *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHardwareSelector_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHardwareSelector_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRenderer", PyvtkHardwareSelector_SetRenderer, METH_VARARGS,
   "SetRenderer(self, __a:vtkRenderer) -> None\nC++: virtual void SetRenderer(vtkRenderer *)\n\nGet/Set the renderer to perform the selection on.\n"},
  {"GetRenderer", PyvtkHardwareSelector_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\n"},
  {"SetArea", PyvtkHardwareSelector_SetArea, METH_VARARGS,
   "SetArea(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int) -> None\nC++: virtual void SetArea(unsigned int _arg1, unsigned int _arg2,\n    unsigned int _arg3, unsigned int _arg4)\nSetArea(self, _arg:(int, int, int, int)) -> None\nC++: virtual void SetArea(const unsigned int _arg[4])\n\nGet/Set the area to select as (xmin, ymin, xmax, ymax).\n"},
  {"GetArea", PyvtkHardwareSelector_GetArea, METH_VARARGS,
   "GetArea(self) -> (int, int, int, int)\nC++: virtual unsigned int *GetArea()\n\n"},
  {"SetFieldAssociation", PyvtkHardwareSelector_SetFieldAssociation, METH_VARARGS,
   "SetFieldAssociation(self, _arg:int) -> None\nC++: virtual void SetFieldAssociation(int _arg)\n\nSet the field type to select. Valid values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nCurrently only FIELD_ASSOCIATION_POINTS and\nFIELD_ASSOCIATION_CELLS are supported.\n"},
  {"GetFieldAssociation", PyvtkHardwareSelector_GetFieldAssociation, METH_VARARGS,
   "GetFieldAssociation(self) -> int\nC++: virtual int GetFieldAssociation()\n\n"},
  {"SetUseProcessIdFromData", PyvtkHardwareSelector_SetUseProcessIdFromData, METH_VARARGS,
   "SetUseProcessIdFromData(self, _arg:bool) -> None\nC++: virtual void SetUseProcessIdFromData(bool _arg)\n\nIn some parallel rendering setups, the process id for elements\nmust be obtained from the data itself, rather than the rendering\nprocess' id. In that case, set this flag to ON (default OFF).\n"},
  {"GetUseProcessIdFromData", PyvtkHardwareSelector_GetUseProcessIdFromData, METH_VARARGS,
   "GetUseProcessIdFromData(self) -> bool\nC++: virtual bool GetUseProcessIdFromData()\n\n"},
  {"Select", PyvtkHardwareSelector_Select, METH_VARARGS,
   "Select(self) -> vtkSelection\nC++: vtkSelection *Select()\n\nPerform the selection. Returns a new instance of vtkSelection\ncontaining the selection on success.\n"},
  {"CaptureBuffers", PyvtkHardwareSelector_CaptureBuffers, METH_VARARGS,
   "CaptureBuffers(self) -> bool\nC++: virtual bool CaptureBuffers()\n\nIt is possible to use the vtkHardwareSelector for a custom\npicking. (Look at vtkScenePicker). In that case instead of\nSelect() on can use CaptureBuffers() to render the selection\nbuffers and then get information about pixel locations suing\nGetPixelInformation(). Use ClearBuffers() to clear buffers after\none's done with the scene. The optional final parameter maxDist\nwill look for a cell within the specified number of pixels from\ndisplay_position. When using the overload with the optional\nselected_position argument, selected_position is filled with the\nposition for which the PixelInformation is being returned. This\nis useful when maxDist > 0 to determine which position's pixel\ninformation is was returned.\n"},
  {"ClearBuffers", PyvtkHardwareSelector_ClearBuffers, METH_VARARGS,
   "ClearBuffers(self) -> None\nC++: void ClearBuffers()\n\n"},
  {"GetRawPixelBuffer", PyvtkHardwareSelector_GetRawPixelBuffer, METH_VARARGS,
   "GetRawPixelBuffer(self, passNo:int) -> Pointer\nC++: unsigned char *GetRawPixelBuffer(int passNo)\n\n"},
  {"GetPixelBuffer", PyvtkHardwareSelector_GetPixelBuffer, METH_VARARGS,
   "GetPixelBuffer(self, passNo:int) -> Pointer\nC++: unsigned char *GetPixelBuffer(int passNo)\n\n"},
  {"RenderCompositeIndex", PyvtkHardwareSelector_RenderCompositeIndex, METH_VARARGS,
   "RenderCompositeIndex(self, index:int) -> None\nC++: virtual void RenderCompositeIndex(unsigned int index)\n\nCalled by any vtkMapper or vtkProp subclass to render a\ncomposite-index. Currently indices >= 0xffffff are not supported.\n"},
  {"UpdateMaximumCellId", PyvtkHardwareSelector_UpdateMaximumCellId, METH_VARARGS,
   "UpdateMaximumCellId(self, attribid:int) -> None\nC++: virtual void UpdateMaximumCellId(vtkIdType attribid)\n\nCalled by any vtkMapper or vtkProp subclass to indicate the\nmaximum cell or point attribute ID it uses. These values are used\nfor determining if the POINT_ID_HIGH or CELL_ID_HIGH passes are\nrequired.\n"},
  {"UpdateMaximumPointId", PyvtkHardwareSelector_UpdateMaximumPointId, METH_VARARGS,
   "UpdateMaximumPointId(self, attribid:int) -> None\nC++: virtual void UpdateMaximumPointId(vtkIdType attribid)\n\n"},
  {"RenderProcessId", PyvtkHardwareSelector_RenderProcessId, METH_VARARGS,
   "RenderProcessId(self, processid:int) -> None\nC++: virtual void RenderProcessId(unsigned int processid)\n\nCalled by any vtkMapper or subclass to render process id. This\nhas any effect when this->UseProcessIdFromData is true.\n"},
  {"GetActorPassOnly", PyvtkHardwareSelector_GetActorPassOnly, METH_VARARGS,
   "GetActorPassOnly(self) -> bool\nC++: virtual bool GetActorPassOnly()\n\nGet/Set to only do the actor pass. If true all other passes will\nbe skipped resulting in a faster pick.\n"},
  {"SetActorPassOnly", PyvtkHardwareSelector_SetActorPassOnly, METH_VARARGS,
   "SetActorPassOnly(self, _arg:bool) -> None\nC++: virtual void SetActorPassOnly(bool _arg)\n\n"},
  {"GetCaptureZValues", PyvtkHardwareSelector_GetCaptureZValues, METH_VARARGS,
   "GetCaptureZValues(self) -> bool\nC++: virtual bool GetCaptureZValues()\n\nGet/Set to capture the zvalue. If true the closest zvalue is\nstored for each prop that is in the selection. ZValue in this\ncase is the value from the zbuffer which can be used in\ncoordinate conversions\n"},
  {"SetCaptureZValues", PyvtkHardwareSelector_SetCaptureZValues, METH_VARARGS,
   "SetCaptureZValues(self, _arg:bool) -> None\nC++: virtual void SetCaptureZValues(bool _arg)\n\n"},
  {"BeginRenderProp", PyvtkHardwareSelector_BeginRenderProp, METH_VARARGS,
   "BeginRenderProp(self) -> None\nC++: virtual void BeginRenderProp()\n\nCalled by the mapper before and after rendering each prop.\n"},
  {"EndRenderProp", PyvtkHardwareSelector_EndRenderProp, METH_VARARGS,
   "EndRenderProp(self) -> None\nC++: virtual void EndRenderProp()\n\n"},
  {"SetProcessID", PyvtkHardwareSelector_SetProcessID, METH_VARARGS,
   "SetProcessID(self, _arg:int) -> None\nC++: virtual void SetProcessID(int _arg)\n\nGet/Set the process id. If process id < 0 (default -1), then the\nPROCESS_PASS is not rendered.\n"},
  {"GetProcessID", PyvtkHardwareSelector_GetProcessID, METH_VARARGS,
   "GetProcessID(self) -> int\nC++: virtual int GetProcessID()\n\n"},
  {"GetPropColorValue", PyvtkHardwareSelector_GetPropColorValue, METH_VARARGS,
   "GetPropColorValue(self) -> (float, float, float)\nC++: virtual float *GetPropColorValue()\n\nGet/Set the color to be used by the prop when drawing\n"},
  {"SetPropColorValue", PyvtkHardwareSelector_SetPropColorValue, METH_VARARGS,
   "SetPropColorValue(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetPropColorValue(float _arg1, float _arg2,\n    float _arg3)\nSetPropColorValue(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPropColorValue(const float _arg[3])\nSetPropColorValue(self, val:int) -> None\nC++: void SetPropColorValue(vtkIdType val)\n\n"},
  {"GetCurrentPass", PyvtkHardwareSelector_GetCurrentPass, METH_VARARGS,
   "GetCurrentPass(self) -> int\nC++: virtual int GetCurrentPass()\n\nGet the current pass number.\n"},
  {"GenerateSelection", PyvtkHardwareSelector_GenerateSelection, METH_VARARGS,
   "GenerateSelection(self) -> vtkSelection\nC++: virtual vtkSelection *GenerateSelection()\nGenerateSelection(self, r:[int, int, int, int]) -> vtkSelection\nC++: virtual vtkSelection *GenerateSelection(unsigned int r[4])\nGenerateSelection(self, x1:int, y1:int, x2:int, y2:int)\n    -> vtkSelection\nC++: virtual vtkSelection *GenerateSelection(unsigned int x1,\n    unsigned int y1, unsigned int x2, unsigned int y2)\n\nGenerates the vtkSelection from pixel buffers. Requires that\nCaptureBuffers() has already been called. Optionally you may pass\na screen region (xmin, ymin, xmax, ymax) to generate a selection\nfrom. The region must be a subregion of the region specified by\nSetArea(), otherwise it will be clipped to that region.\n"},
  {"GeneratePolygonSelection", PyvtkHardwareSelector_GeneratePolygonSelection, METH_VARARGS,
   "GeneratePolygonSelection(self, polygonPoints:[int, ...],\n    count:int) -> vtkSelection\nC++: virtual vtkSelection *GeneratePolygonSelection(\n    int *polygonPoints, vtkIdType count)\n\nGenerates the vtkSelection from pixel buffers. Same as\nGenerateSelection, except this one use a polygon, instead of a\nrectangle region, and select elements inside the polygon. NOTE:\nThe CaptureBuffers() needs to be called first.\n"},
  {"GetPropFromID", PyvtkHardwareSelector_GetPropFromID, METH_VARARGS,
   "GetPropFromID(self, id:int) -> vtkProp\nC++: vtkProp *GetPropFromID(int id)\n\nreturns the prop associated with a ID. This is valid only until\nReleasePixBuffers() gets called.\n"},
  {"PassTypeToString", PyvtkHardwareSelector_PassTypeToString, METH_VARARGS,
   "PassTypeToString(self, type:PassTypes) -> str\nC++: std::string PassTypeToString(PassTypes type)\n\nConvert a PassTypes enum value to a human readable string.\n"},
  {"Convert", PyvtkHardwareSelector_Convert, METH_VARARGS,
   "Convert(id:int, tcoord:[float, float, float]) -> None\nC++: static void Convert(vtkIdType id, float tcoord[3])\n\n"},
  {"SavePixelBuffer", PyvtkHardwareSelector_SavePixelBuffer, METH_VARARGS,
   "SavePixelBuffer(self, passNo:int) -> None\nC++: virtual void SavePixelBuffer(int passNo)\n\n"},
  {"HasHighCellIds", PyvtkHardwareSelector_HasHighCellIds, METH_VARARGS,
   "HasHighCellIds(self) -> bool\nC++: bool HasHighCellIds()\n\n"},
  {"HasHighPointIds", PyvtkHardwareSelector_HasHighPointIds, METH_VARARGS,
   "HasHighPointIds(self) -> bool\nC++: bool HasHighPointIds()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHardwareSelector_Doc =
  "vtkHardwareSelector - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHardwareSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkHardwareSelector", // tp_name
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
  PyvtkHardwareSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHardwareSelector_StaticNew()
{
  return vtkHardwareSelector::New();
}

PyObject *PyvtkHardwareSelector_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHardwareSelector_Type, PyvtkHardwareSelector_Methods,
    "vtkHardwareSelector",
 &PyvtkHardwareSelector_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHardwareSelector_PassTypes_Type);
  PyVTKEnum_Add(&PyvtkHardwareSelector_PassTypes_Type, "vtkHardwareSelector.PassTypes");

  o = (PyObject *)&PyvtkHardwareSelector_PassTypes_Type;
  if (PyDict_SetItemString(d, "PassTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkHardwareSelector::PassTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "ACTOR_PASS", vtkHardwareSelector::ACTOR_PASS },
        { "COMPOSITE_INDEX_PASS", vtkHardwareSelector::COMPOSITE_INDEX_PASS },
        { "POINT_ID_LOW24", vtkHardwareSelector::POINT_ID_LOW24 },
        { "POINT_ID_HIGH24", vtkHardwareSelector::POINT_ID_HIGH24 },
        { "PROCESS_PASS", vtkHardwareSelector::PROCESS_PASS },
        { "CELL_ID_LOW24", vtkHardwareSelector::CELL_ID_LOW24 },
        { "CELL_ID_HIGH24", vtkHardwareSelector::CELL_ID_HIGH24 },
        { "MAX_KNOWN_PASS", vtkHardwareSelector::MAX_KNOWN_PASS },
        { "MIN_KNOWN_PASS", vtkHardwareSelector::MIN_KNOWN_PASS },
      };

    o = PyvtkHardwareSelector_PassTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHardwareSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHardwareSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHardwareSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

