// python wrapper for vtkAbstractImageInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractImageInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractImageInterpolator(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageBorderMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageBorderMode", // tp_name
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
PyObject *PyvtkImageBorderMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImageBorderMode_Type, static_cast<int>(val));
}

extern "C" { PyObject *PyvtkAbstractImageInterpolator_ClassNew(); }


static PyObject *
PyvtkAbstractImageInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractImageInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractImageInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractImageInterpolator *tempr = vtkAbstractImageInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractImageInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractImageInterpolator::NewInstance());

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
PyvtkAbstractImageInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractImageInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractImageInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_ReleaseData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseData();
    }
    else
    {
      op->vtkAbstractImageInterpolator::ReleaseData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  vtkAbstractImageInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractImageInterpolator"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkAbstractImageInterpolator::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_Interpolate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Interpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = (ap.IsBound() ?
      op->Interpolate(temp0, temp1, temp2, temp3) :
      op->vtkAbstractImageInterpolator::Interpolate(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractImageInterpolator_Interpolate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Interpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->Interpolate(temp0, temp1) :
      op->vtkAbstractImageInterpolator::Interpolate(temp0, temp1));

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
PyvtkAbstractImageInterpolator_Interpolate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkAbstractImageInterpolator_Interpolate_s1(self, args);
    case 2:
      return PyvtkAbstractImageInterpolator_Interpolate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Interpolate");
  return nullptr;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutValue(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetOutValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutValue() :
      op->vtkAbstractImageInterpolator::GetOutValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAbstractImageInterpolator::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetComponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentOffset(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetComponentOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetComponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentOffset() :
      op->vtkAbstractImageInterpolator::GetComponentOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetComponentCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentCount(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetComponentCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetComponentCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentCount() :
      op->vtkAbstractImageInterpolator::GetComponentCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_ComputeNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeNumberOfComponents(temp0) :
      op->vtkAbstractImageInterpolator::ComputeNumberOfComponents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkAbstractImageInterpolator::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_InterpolateIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateIJK(temp0, temp1);
    }
    else
    {
      op->vtkAbstractImageInterpolator::InterpolateIJK(temp0, temp1);
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
PyvtkAbstractImageInterpolator_CheckBoundsIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckBoundsIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    bool tempr = (ap.IsBound() ?
      op->CheckBoundsIJK(temp0) :
      op->vtkAbstractImageInterpolator::CheckBoundsIJK(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  vtkImageBorderMode temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkImageBorderMode"))
  {
    if (ap.IsBound())
    {
      op->SetBorderMode(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetBorderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderModeToClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToClamp();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetBorderModeToClamp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderModeToRepeat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToRepeat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToRepeat();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetBorderModeToRepeat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetBorderModeToMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToMirror();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetBorderModeToMirror();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBorderMode tempr = (ap.IsBound() ?
      op->GetBorderMode() :
      op->vtkAbstractImageInterpolator::GetBorderMode());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkImageBorderMode");
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetBorderModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBorderModeAsString() :
      op->vtkAbstractImageInterpolator::GetBorderModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SetSlidingWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlidingWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlidingWindow(temp0);
    }
    else
    {
      op->vtkAbstractImageInterpolator::SetSlidingWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SlidingWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SlidingWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SlidingWindowOn();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SlidingWindowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_SlidingWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SlidingWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SlidingWindowOff();
    }
    else
    {
      op->vtkAbstractImageInterpolator::SlidingWindowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetSlidingWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlidingWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSlidingWindow() :
      op->vtkAbstractImageInterpolator::GetSlidingWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_ComputeSupportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSupportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->ComputeSupportSize(temp0, temp1);

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
PyvtkAbstractImageInterpolator_IsSeparable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSeparable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsSeparable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkAbstractImageInterpolator::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkAbstractImageInterpolator::GetDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkAbstractImageInterpolator::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractImageInterpolator_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractImageInterpolator *op = static_cast<vtkAbstractImageInterpolator *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkAbstractImageInterpolator::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractImageInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkAbstractImageInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractImageInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractImageInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractImageInterpolator\nC++: static vtkAbstractImageInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractImageInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractImageInterpolator\nC++: vtkAbstractImageInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractImageInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractImageInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkAbstractImageInterpolator_Initialize, METH_VARARGS,
   "Initialize(self, data:vtkDataObject) -> None\nC++: virtual void Initialize(vtkDataObject *data)\n\nInitialize the interpolator with the data that you wish to\ninterpolate.\n"},
  {"ReleaseData", PyvtkAbstractImageInterpolator_ReleaseData, METH_VARARGS,
   "ReleaseData(self) -> None\nC++: virtual void ReleaseData()\n\nRelease any data stored by the interpolator.\n"},
  {"DeepCopy", PyvtkAbstractImageInterpolator_DeepCopy, METH_VARARGS,
   "DeepCopy(self, obj:vtkAbstractImageInterpolator) -> None\nC++: void DeepCopy(vtkAbstractImageInterpolator *obj)\n\nCopy the interpolator.  It is possible to duplicate an\ninterpolator by calling NewInstance() followed by DeepCopy().\n"},
  {"Update", PyvtkAbstractImageInterpolator_Update, METH_VARARGS,
   "Update(self) -> None\nC++: virtual void Update()\n\nUpdate the interpolator.  If the interpolator has been modified\nby a Set method since Initialize() was called, you must call this\nmethod to update the interpolator before you can use it.\n"},
  {"Interpolate", PyvtkAbstractImageInterpolator_Interpolate, METH_VARARGS,
   "Interpolate(self, x:float, y:float, z:float, component:int)\n    -> float\nC++: double Interpolate(double x, double y, double z,\n    int component)\nInterpolate(self, point:(float, float, float), value:[float, ...])\n     -> bool\nC++: bool Interpolate(const double point[3], double *value)\n\nGet the result of interpolating the specified component of the\ninput data, which should be set to zero if there is only one\ncomponent. If the point is not within the bounds of the data set,\nthen OutValue will be returned.  This method is primarily meant\nfor use by the wrapper languages.\n"},
  {"SetOutValue", PyvtkAbstractImageInterpolator_SetOutValue, METH_VARARGS,
   "SetOutValue(self, outValue:float) -> None\nC++: void SetOutValue(double outValue)\n\nThe value to return when the point is out of bounds.\n"},
  {"GetOutValue", PyvtkAbstractImageInterpolator_GetOutValue, METH_VARARGS,
   "GetOutValue(self) -> float\nC++: double GetOutValue()\n\n"},
  {"SetTolerance", PyvtkAbstractImageInterpolator_SetTolerance, METH_VARARGS,
   "SetTolerance(self, tol:float) -> None\nC++: void SetTolerance(double tol)\n\nThe tolerance to apply when checking whether a point is out of\nbounds. This is a fractional distance relative to the voxel size,\nso a tolerance of 1 expands the bounds by one voxel.\n"},
  {"GetTolerance", PyvtkAbstractImageInterpolator_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: double GetTolerance()\n\n"},
  {"SetComponentOffset", PyvtkAbstractImageInterpolator_SetComponentOffset, METH_VARARGS,
   "SetComponentOffset(self, offset:int) -> None\nC++: void SetComponentOffset(int offset)\n\nThis method specifies which component of the input will be\ninterpolated, or if ComponentCount is also set, it specifies the\nfirst component. When the interpolation is performed, it will be\nclamped to the number of available components.\n"},
  {"GetComponentOffset", PyvtkAbstractImageInterpolator_GetComponentOffset, METH_VARARGS,
   "GetComponentOffset(self) -> int\nC++: int GetComponentOffset()\n\n"},
  {"SetComponentCount", PyvtkAbstractImageInterpolator_SetComponentCount, METH_VARARGS,
   "SetComponentCount(self, count:int) -> None\nC++: void SetComponentCount(int count)\n\nThis method specifies the number of components to extract.  The\ndefault value is -1, which extracts all available components. \nWhen the interpolation is performed, this will be clamped to the\nnumber of available components.\n"},
  {"GetComponentCount", PyvtkAbstractImageInterpolator_GetComponentCount, METH_VARARGS,
   "GetComponentCount(self) -> int\nC++: int GetComponentCount()\n\n"},
  {"ComputeNumberOfComponents", PyvtkAbstractImageInterpolator_ComputeNumberOfComponents, METH_VARARGS,
   "ComputeNumberOfComponents(self, inputComponents:int) -> int\nC++: int ComputeNumberOfComponents(int inputComponents)\n\nCompute the number of output components based on the\nComponentOffset, ComponentCount, and the number of components in\nthe input data.\n"},
  {"GetNumberOfComponents", PyvtkAbstractImageInterpolator_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: int GetNumberOfComponents()\n\nGet the number of components that will be returned when\nInterpolate() is called.  This is only valid after\ninitialization.  Before then, use ComputeNumberOfComponents\ninstead.\n"},
  {"InterpolateIJK", PyvtkAbstractImageInterpolator_InterpolateIJK, METH_VARARGS,
   "InterpolateIJK(self, point:(float, float, float), value:[float,\n    ...]) -> None\nC++: void InterpolateIJK(const double point[3], double *value)\n\nA version of Interpolate that takes structured coords instead of\ndata coords.  Structured coords are the data coords after\nsubtracting the Origin and dividing by the Spacing.\n"},
  {"CheckBoundsIJK", PyvtkAbstractImageInterpolator_CheckBoundsIJK, METH_VARARGS,
   "CheckBoundsIJK(self, x:(float, float, float)) -> bool\nC++: bool CheckBoundsIJK(const double x[3])\n\nCheck an x,y,z point to see if it is within the bounds for the\nstructured coords of the image.  This is meant to be called prior\nto InterpolateIJK.  The bounds that are checked against are the\ninput image extent plus the tolerance.\n"},
  {"SetBorderMode", PyvtkAbstractImageInterpolator_SetBorderMode, METH_VARARGS,
   "SetBorderMode(self, mode:vtkImageBorderMode) -> None\nC++: void SetBorderMode(vtkImageBorderMode mode)\n\nThe border mode (default: clamp).  This controls how\nout-of-bounds lookups are handled, i.e. how data will be\nextrapolated beyond the bounds of the image.  The default is to\nclamp the lookup point to the bounds.  The other modes wrap\naround to the opposite boundary, or mirror the image at the\nboundary.\n"},
  {"SetBorderModeToClamp", PyvtkAbstractImageInterpolator_SetBorderModeToClamp, METH_VARARGS,
   "SetBorderModeToClamp(self) -> None\nC++: void SetBorderModeToClamp()\n\n"},
  {"SetBorderModeToRepeat", PyvtkAbstractImageInterpolator_SetBorderModeToRepeat, METH_VARARGS,
   "SetBorderModeToRepeat(self) -> None\nC++: void SetBorderModeToRepeat()\n\n"},
  {"SetBorderModeToMirror", PyvtkAbstractImageInterpolator_SetBorderModeToMirror, METH_VARARGS,
   "SetBorderModeToMirror(self) -> None\nC++: void SetBorderModeToMirror()\n\n"},
  {"GetBorderMode", PyvtkAbstractImageInterpolator_GetBorderMode, METH_VARARGS,
   "GetBorderMode(self) -> vtkImageBorderMode\nC++: vtkImageBorderMode GetBorderMode()\n\n"},
  {"GetBorderModeAsString", PyvtkAbstractImageInterpolator_GetBorderModeAsString, METH_VARARGS,
   "GetBorderModeAsString(self) -> str\nC++: const char *GetBorderModeAsString()\n\n"},
  {"SetSlidingWindow", PyvtkAbstractImageInterpolator_SetSlidingWindow, METH_VARARGS,
   "SetSlidingWindow(self, x:bool) -> None\nC++: void SetSlidingWindow(bool x)\n\nEnable sliding window for separable kernels. When this is\nenabled, the interpolator will cache partial sums in in order to\naccelerate the computation.  It only makes sense to do this if\nthe interpolator is used by calling InterpolateRow() while\nincrementing first the Y, and then the Z index with every call.\n"},
  {"SlidingWindowOn", PyvtkAbstractImageInterpolator_SlidingWindowOn, METH_VARARGS,
   "SlidingWindowOn(self) -> None\nC++: void SlidingWindowOn()\n\n"},
  {"SlidingWindowOff", PyvtkAbstractImageInterpolator_SlidingWindowOff, METH_VARARGS,
   "SlidingWindowOff(self) -> None\nC++: void SlidingWindowOff()\n\n"},
  {"GetSlidingWindow", PyvtkAbstractImageInterpolator_GetSlidingWindow, METH_VARARGS,
   "GetSlidingWindow(self) -> bool\nC++: bool GetSlidingWindow()\n\n"},
  {"ComputeSupportSize", PyvtkAbstractImageInterpolator_ComputeSupportSize, METH_VARARGS,
   "ComputeSupportSize(self, matrix:(float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float), support:[int, int, int]) -> None\nC++: virtual void ComputeSupportSize(const double matrix[16],\n    int support[3])\n\nGet the support size for use in computing update extents.  If the\ndata will be sampled on a regular grid, then pass a matrix\ndescribing the structured coordinate transformation between the\noutput and the input. Otherwise, pass nullptr as the matrix to\nretrieve the full kernel size.\n"},
  {"IsSeparable", PyvtkAbstractImageInterpolator_IsSeparable, METH_VARARGS,
   "IsSeparable(self) -> bool\nC++: virtual bool IsSeparable()\n\nTrue if the interpolation is separable, which means that the\nweights can be precomputed in order to accelerate the\ninterpolation.  Any interpolator which is separable will\nimplement the methods PrecomputeWeightsForExtent and\nInterpolateRow\n"},
  {"GetSpacing", PyvtkAbstractImageInterpolator_GetSpacing, METH_VARARGS,
   "GetSpacing(self) -> (float, float, float)\nC++: virtual double *GetSpacing()\n\nGet the spacing of the data being interpolated.\n"},
  {"GetDirection", PyvtkAbstractImageInterpolator_GetDirection, METH_VARARGS,
   "GetDirection(self) -> (float, float, float, float, float, float,\n    float, float, float)\nC++: virtual double *GetDirection()\n\nGet the direction of the data being interpolated.\n"},
  {"GetOrigin", PyvtkAbstractImageInterpolator_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\nGet the origin of the data being interpolated.\n"},
  {"GetExtent", PyvtkAbstractImageInterpolator_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetExtent()\n\nGet the extent of the data being interpolated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractImageInterpolator_Doc =
  "vtkAbstractImageInterpolator - interpolate data values from images\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAbstractImageInterpolator provides an abstract interface for\n"
  "interpolating image data.  You specify the data set you want to\n"
  "interpolate values from, then call Interpolate(x,y,z) to interpolate\n"
  "the data.@par Thanks: Thanks to David Gobbi at the Seaman Family MR\n"
  "Centre and Dept. of Clinical Neurosciences, Foothills Medical Centre,\n"
  "Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImageReslice vtkImageInterpolator vtkImageSincInterpolator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractImageInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkAbstractImageInterpolator", // tp_name
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
  PyvtkAbstractImageInterpolator_Doc, // tp_doc
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

PyObject *PyvtkAbstractImageInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractImageInterpolator_Type, PyvtkAbstractImageInterpolator_Methods,
    "vtkAbstractImageInterpolator",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractImageInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractImageInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractImageInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkImageBorderMode_Type);
  PyVTKEnum_Add(&PyvtkImageBorderMode_Type, "vtkImageBorderMode");

  o = (PyObject *)&PyvtkImageBorderMode_Type;
  if (PyDict_SetItemString(dict, "vtkImageBorderMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; vtkImageBorderMode value; }
      constants[3] = {
        { "VTK_IMAGE_BORDER_CLAMP", VTK_IMAGE_BORDER_CLAMP },
        { "VTK_IMAGE_BORDER_REPEAT", VTK_IMAGE_BORDER_REPEAT },
        { "VTK_IMAGE_BORDER_MIRROR", VTK_IMAGE_BORDER_MIRROR },
      };

    o = PyvtkImageBorderMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

