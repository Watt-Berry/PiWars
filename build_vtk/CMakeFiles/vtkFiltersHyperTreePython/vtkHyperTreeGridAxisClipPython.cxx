// python wrapper for vtkHyperTreeGridAxisClip
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridAxisClip.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridAxisClip(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridAxisClip_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridAxisClip_ClipType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridAxisClip.ClipType", // tp_name
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
PyObject *PyvtkHyperTreeGridAxisClip_ClipType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHyperTreeGridAxisClip_ClipType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkHyperTreeGridAxisClip_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridAxisClip::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridAxisClip::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridAxisClip *tempr = vtkHyperTreeGridAxisClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridAxisClip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridAxisClip::NewInstance());

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
PyvtkHyperTreeGridAxisClip_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridAxisClip::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridAxisClip::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetClipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClipType(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetClipType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetClipTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipTypeMinValue() :
      op->vtkHyperTreeGridAxisClip::GetClipTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetClipTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipTypeMaxValue() :
      op->vtkHyperTreeGridAxisClip::GetClipTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetClipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipType() :
      op->vtkHyperTreeGridAxisClip::GetClipType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetClipTypeToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTypeToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetClipTypeToPlane();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetClipTypeToPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetClipTypeToBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTypeToBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetClipTypeToBox();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetClipTypeToBox();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetClipTypeToQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTypeToQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetClipTypeToQuadric();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetClipTypeToQuadric();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetPlaneNormalAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneNormalAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneNormalAxis(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetPlaneNormalAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneNormalAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneNormalAxisMinValue() :
      op->vtkHyperTreeGridAxisClip::GetPlaneNormalAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneNormalAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneNormalAxisMaxValue() :
      op->vtkHyperTreeGridAxisClip::GetPlaneNormalAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneNormalAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneNormalAxis() :
      op->vtkHyperTreeGridAxisClip::GetPlaneNormalAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetPlanePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlanePosition(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetPlanePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetPlanePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPlanePosition() :
      op->vtkHyperTreeGridAxisClip::GetPlanePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkHyperTreeGridAxisClip_SetBounds_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAxisClip_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkHyperTreeGridAxisClip::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetMinimumBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMinimumBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::GetMinimumBounds(temp0);
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
PyvtkHyperTreeGridAxisClip_GetMaximumBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMaximumBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::GetMaximumBounds(temp0);
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
PyvtkHyperTreeGridAxisClip_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkHyperTreeGridAxisClip::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  vtkQuadric *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadric"))
  {
    if (ap.IsBound())
    {
      op->SetQuadric(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetQuadric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadric *tempr = (ap.IsBound() ?
      op->GetQuadric() :
      op->vtkHyperTreeGridAxisClip::GetQuadric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    if (ap.IsBound())
    {
      op->SetQuadricCoefficients(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetQuadricCoefficients(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 10;
  double temp0[10];
  double save0[10];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetQuadricCoefficients(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::SetQuadricCoefficients(temp0);
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
PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 10:
      return PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetQuadricCoefficients");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  const size_t size0 = 10;
  double temp0[10];
  double save0[10];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetQuadricCoefficients(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisClip::GetQuadricCoefficients(temp0);
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
PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetQuadricCoefficients() :
      op->vtkHyperTreeGridAxisClip::GetQuadricCoefficients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients_s1(self, args);
    case 0:
      return PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetQuadricCoefficients");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridAxisClip_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisClip *op = static_cast<vtkHyperTreeGridAxisClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHyperTreeGridAxisClip::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridAxisClip_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridAxisClip_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridAxisClip_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridAxisClip_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridAxisClip\nC++: static vtkHyperTreeGridAxisClip *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridAxisClip_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridAxisClip\nC++: vtkHyperTreeGridAxisClip *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridAxisClip_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridAxisClip_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetClipType", PyvtkHyperTreeGridAxisClip_SetClipType, METH_VARARGS,
   "SetClipType(self, _arg:int) -> None\nC++: virtual void SetClipType(int _arg)\n\nSet/get type of clip. Default value is 0 (plane clip).\n"},
  {"GetClipTypeMinValue", PyvtkHyperTreeGridAxisClip_GetClipTypeMinValue, METH_VARARGS,
   "GetClipTypeMinValue(self) -> int\nC++: virtual int GetClipTypeMinValue()\n\n"},
  {"GetClipTypeMaxValue", PyvtkHyperTreeGridAxisClip_GetClipTypeMaxValue, METH_VARARGS,
   "GetClipTypeMaxValue(self) -> int\nC++: virtual int GetClipTypeMaxValue()\n\n"},
  {"GetClipType", PyvtkHyperTreeGridAxisClip_GetClipType, METH_VARARGS,
   "GetClipType(self) -> int\nC++: virtual int GetClipType()\n\n"},
  {"SetClipTypeToPlane", PyvtkHyperTreeGridAxisClip_SetClipTypeToPlane, METH_VARARGS,
   "SetClipTypeToPlane(self) -> None\nC++: void SetClipTypeToPlane()\n\n"},
  {"SetClipTypeToBox", PyvtkHyperTreeGridAxisClip_SetClipTypeToBox, METH_VARARGS,
   "SetClipTypeToBox(self) -> None\nC++: void SetClipTypeToBox()\n\n"},
  {"SetClipTypeToQuadric", PyvtkHyperTreeGridAxisClip_SetClipTypeToQuadric, METH_VARARGS,
   "SetClipTypeToQuadric(self) -> None\nC++: void SetClipTypeToQuadric()\n\n"},
  {"SetPlaneNormalAxis", PyvtkHyperTreeGridAxisClip_SetPlaneNormalAxis, METH_VARARGS,
   "SetPlaneNormalAxis(self, _arg:int) -> None\nC++: virtual void SetPlaneNormalAxis(int _arg)\n\nSet/get normal axis of clipping plane: 0=X, 1=Y, 2=Z. Default\nvalue is 0 (X-axis normal).\n"},
  {"GetPlaneNormalAxisMinValue", PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxisMinValue, METH_VARARGS,
   "GetPlaneNormalAxisMinValue(self) -> int\nC++: virtual int GetPlaneNormalAxisMinValue()\n\n"},
  {"GetPlaneNormalAxisMaxValue", PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxisMaxValue, METH_VARARGS,
   "GetPlaneNormalAxisMaxValue(self) -> int\nC++: virtual int GetPlaneNormalAxisMaxValue()\n\n"},
  {"GetPlaneNormalAxis", PyvtkHyperTreeGridAxisClip_GetPlaneNormalAxis, METH_VARARGS,
   "GetPlaneNormalAxis(self) -> int\nC++: virtual int GetPlaneNormalAxis()\n\n"},
  {"SetPlanePosition", PyvtkHyperTreeGridAxisClip_SetPlanePosition, METH_VARARGS,
   "SetPlanePosition(self, _arg:float) -> None\nC++: virtual void SetPlanePosition(double _arg)\n\nSet/get position of clipping plane: intercept along normal axis.\nDefault value is 0.0.\n"},
  {"GetPlanePosition", PyvtkHyperTreeGridAxisClip_GetPlanePosition, METH_VARARGS,
   "GetPlanePosition(self) -> float\nC++: virtual double GetPlanePosition()\n\n"},
  {"SetBounds", PyvtkHyperTreeGridAxisClip_SetBounds, METH_VARARGS,
   "SetBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetBounds(self, _arg:(float, float, float, float, float, float))\n    -> None\nC++: virtual void SetBounds(const double _arg[6])\n\nSet/get bounds of clipping box.\n"},
  {"GetBounds", PyvtkHyperTreeGridAxisClip_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\n"},
  {"GetMinimumBounds", PyvtkHyperTreeGridAxisClip_GetMinimumBounds, METH_VARARGS,
   "GetMinimumBounds(self, __a:[float, float, float]) -> None\nC++: void GetMinimumBounds(double[3])\n\n"},
  {"GetMaximumBounds", PyvtkHyperTreeGridAxisClip_GetMaximumBounds, METH_VARARGS,
   "GetMaximumBounds(self, __a:[float, float, float]) -> None\nC++: void GetMaximumBounds(double[3])\n\n"},
  {"SetInsideOut", PyvtkHyperTreeGridAxisClip_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:bool) -> None\nC++: virtual void SetInsideOut(bool _arg)\n\nSet/Get the InsideOut flag, in the case of clip by hyperplane.\nWhen off, a cell is clipped out when its origin is above said\nplane intercept along the considered direction, inside otherwise.\nWhen on, a cell is clipped out when its origin + size is below\nsaid said plane intercept along the considered direction.\n"},
  {"GetInsideOut", PyvtkHyperTreeGridAxisClip_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> bool\nC++: virtual bool GetInsideOut()\n\n"},
  {"InsideOutOn", PyvtkHyperTreeGridAxisClip_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\n"},
  {"InsideOutOff", PyvtkHyperTreeGridAxisClip_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {"SetQuadric", PyvtkHyperTreeGridAxisClip_SetQuadric, METH_VARARGS,
   "SetQuadric(self, __a:vtkQuadric) -> None\nC++: virtual void SetQuadric(vtkQuadric *)\n\nSet/Get the clipping quadric function.\n"},
  {"GetQuadric", PyvtkHyperTreeGridAxisClip_GetQuadric, METH_VARARGS,
   "GetQuadric(self) -> vtkQuadric\nC++: virtual vtkQuadric *GetQuadric()\n\n"},
  {"SetQuadricCoefficients", PyvtkHyperTreeGridAxisClip_SetQuadricCoefficients, METH_VARARGS,
   "SetQuadricCoefficients(self, a:float, b:float, c:float, d:float,\n    e:float, f:float, g:float, h:float, i:float, j:float) -> None\nC++: void SetQuadricCoefficients(double a, double b, double c,\n    double d, double e, double f, double g, double h, double i,\n    double j)\nSetQuadricCoefficients(self, __a:[float, float, float, float,\n    float, float, float, float, float, float]) -> None\nC++: void SetQuadricCoefficients(double[10])\n\nHelpers to set/get the 10 coefficients of the quadric function\n"},
  {"GetQuadricCoefficients", PyvtkHyperTreeGridAxisClip_GetQuadricCoefficients, METH_VARARGS,
   "GetQuadricCoefficients(self, __a:[float, float, float, float,\n    float, float, float, float, float, float]) -> None\nC++: void GetQuadricCoefficients(double[10])\nGetQuadricCoefficients(self) -> Pointer\nC++: double *GetQuadricCoefficients()\n\n"},
  {"GetMTime", PyvtkHyperTreeGridAxisClip_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime because we delegate to a vtkQuadric.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridAxisClip_Doc =
  "vtkHyperTreeGridAxisClip - Axis aligned hyper tree grid clip\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "Clip an hyper tree grid along an axis aligned plane or box and output\n"
  "a hyper tree grid with same dimensionality. This filter also allows\n"
  "for reversal of the direction of what is inside versus what is\n"
  "outside by setting the InsideOut instance variable.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n\n"
  "@par Thanks: This class was written by Philippe Pebay on a idea of\n"
  "Guenole Harel and Jacques-Bernard Lekien, 2016 This class was\n"
  "modified by Jacques-Bernard Lekien, 2018 This work was supported by\n"
  "Commissariat a l'Energie Atomique CEA, DAM, DIF, F-91297 Arpajon,\n"
  "France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridAxisClip_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridAxisClip", // tp_name
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
  PyvtkHyperTreeGridAxisClip_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridAxisClip_StaticNew()
{
  return vtkHyperTreeGridAxisClip::New();
}

PyObject *PyvtkHyperTreeGridAxisClip_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridAxisClip_Type, PyvtkHyperTreeGridAxisClip_Methods,
    "vtkHyperTreeGridAxisClip",
 &PyvtkHyperTreeGridAxisClip_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHyperTreeGridAxisClip_ClipType_Type);
  PyVTKEnum_Add(&PyvtkHyperTreeGridAxisClip_ClipType_Type, "vtkHyperTreeGridAxisClip.ClipType");

  o = (PyObject *)&PyvtkHyperTreeGridAxisClip_ClipType_Type;
  if (PyDict_SetItemString(d, "ClipType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "PLANE", vtkHyperTreeGridAxisClip::PLANE },
        { "BOX", vtkHyperTreeGridAxisClip::BOX },
        { "QUADRIC", vtkHyperTreeGridAxisClip::QUADRIC },
      };

    o = PyvtkHyperTreeGridAxisClip_ClipType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridAxisClip(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridAxisClip_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridAxisClip", o) != 0)
  {
    Py_DECREF(o);
  }

}

