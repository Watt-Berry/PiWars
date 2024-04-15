// python wrapper for vtkPolyDataSilhouette
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyDataSilhouette.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataSilhouette(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataSilhouette_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataSilhouette_Directions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkPolyDataSilhouette.Directions", // tp_name
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
PyObject *PyvtkPolyDataSilhouette_Directions_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPolyDataSilhouette_Directions_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPolyDataSilhouette_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataSilhouette::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataSilhouette::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataSilhouette *tempr = vtkPolyDataSilhouette::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataSilhouette *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataSilhouette::NewInstance());

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
PyvtkPolyDataSilhouette_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataSilhouette::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataSilhouette::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetEnableFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableFeatureAngle(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetEnableFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetEnableFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableFeatureAngle() :
      op->vtkPolyDataSilhouette::GetEnableFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureAngle(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkPolyDataSilhouette::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetBorderEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderEdges(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetBorderEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetBorderEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorderEdges() :
      op->vtkPolyDataSilhouette::GetBorderEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_BorderEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderEdgesOn();
    }
    else
    {
      op->vtkPolyDataSilhouette::BorderEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_BorderEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderEdgesOff();
    }
    else
    {
      op->vtkPolyDataSilhouette::BorderEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkPolyDataSilhouette::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOn();
    }
    else
    {
      op->vtkPolyDataSilhouette::PieceInvariantOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOff();
    }
    else
    {
      op->vtkPolyDataSilhouette::PieceInvariantOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkPolyDataSilhouette::GetDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToSpecifiedVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToSpecifiedVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToSpecifiedVector();
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirectionToSpecifiedVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToSpecifiedOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToSpecifiedOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToSpecifiedOrigin();
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirectionToSpecifiedOrigin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToCameraVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToCameraVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToCameraVector();
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirectionToCameraVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetDirectionToCameraOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToCameraOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToCameraOrigin();
    }
    else
    {
      op->vtkPolyDataSilhouette::SetDirectionToCameraOrigin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkPolyDataSilhouette::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  vtkProp3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->SetProp3D(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetProp3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetProp3D() :
      op->vtkPolyDataSilhouette::GetProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

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
      op->SetVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVector(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyDataSilhouette_SetVector_s1(self, args);
    case 1:
      return PyvtkPolyDataSilhouette_SetVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVector");
  return nullptr;
}


static PyObject *
PyvtkPolyDataSilhouette_GetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVector() :
      op->vtkPolyDataSilhouette::GetVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkPolyDataSilhouette::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataSilhouette_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyDataSilhouette_SetOrigin_s1(self, args);
    case 1:
      return PyvtkPolyDataSilhouette_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkPolyDataSilhouette_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkPolyDataSilhouette::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataSilhouette_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataSilhouette *op = static_cast<vtkPolyDataSilhouette *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPolyDataSilhouette::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataSilhouette_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataSilhouette_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataSilhouette_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataSilhouette_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyDataSilhouette\nC++: static vtkPolyDataSilhouette *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataSilhouette_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataSilhouette\nC++: vtkPolyDataSilhouette *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataSilhouette_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataSilhouette_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnableFeatureAngle", PyvtkPolyDataSilhouette_SetEnableFeatureAngle, METH_VARARGS,
   "SetEnableFeatureAngle(self, _arg:int) -> None\nC++: virtual void SetEnableFeatureAngle(int _arg)\n\nEnables or Disables generation of silhouette edges along sharp\nedges\n"},
  {"GetEnableFeatureAngle", PyvtkPolyDataSilhouette_GetEnableFeatureAngle, METH_VARARGS,
   "GetEnableFeatureAngle(self) -> int\nC++: virtual int GetEnableFeatureAngle()\n\n"},
  {"SetFeatureAngle", PyvtkPolyDataSilhouette_SetFeatureAngle, METH_VARARGS,
   "SetFeatureAngle(self, _arg:float) -> None\nC++: virtual void SetFeatureAngle(double _arg)\n\nSets/Gets minimal angle for sharp edges detection. Default is 60\n"},
  {"GetFeatureAngle", PyvtkPolyDataSilhouette_GetFeatureAngle, METH_VARARGS,
   "GetFeatureAngle(self) -> float\nC++: virtual double GetFeatureAngle()\n\n"},
  {"SetBorderEdges", PyvtkPolyDataSilhouette_SetBorderEdges, METH_VARARGS,
   "SetBorderEdges(self, _arg:int) -> None\nC++: virtual void SetBorderEdges(vtkTypeBool _arg)\n\nEnables or Disables generation of border edges. Note: borders\nexist only in case of non closed surface\n"},
  {"GetBorderEdges", PyvtkPolyDataSilhouette_GetBorderEdges, METH_VARARGS,
   "GetBorderEdges(self) -> int\nC++: virtual vtkTypeBool GetBorderEdges()\n\n"},
  {"BorderEdgesOn", PyvtkPolyDataSilhouette_BorderEdgesOn, METH_VARARGS,
   "BorderEdgesOn(self) -> None\nC++: virtual void BorderEdgesOn()\n\n"},
  {"BorderEdgesOff", PyvtkPolyDataSilhouette_BorderEdgesOff, METH_VARARGS,
   "BorderEdgesOff(self) -> None\nC++: virtual void BorderEdgesOff()\n\n"},
  {"SetPieceInvariant", PyvtkPolyDataSilhouette_SetPieceInvariant, METH_VARARGS,
   "SetPieceInvariant(self, _arg:int) -> None\nC++: virtual void SetPieceInvariant(vtkTypeBool _arg)\n\nEnables or Disables piece invariance. This is useful when dealing\nwith multi-block data sets. Note: requires one level of ghost\ncells\n"},
  {"GetPieceInvariant", PyvtkPolyDataSilhouette_GetPieceInvariant, METH_VARARGS,
   "GetPieceInvariant(self) -> int\nC++: virtual vtkTypeBool GetPieceInvariant()\n\n"},
  {"PieceInvariantOn", PyvtkPolyDataSilhouette_PieceInvariantOn, METH_VARARGS,
   "PieceInvariantOn(self) -> None\nC++: virtual void PieceInvariantOn()\n\n"},
  {"PieceInvariantOff", PyvtkPolyDataSilhouette_PieceInvariantOff, METH_VARARGS,
   "PieceInvariantOff(self) -> None\nC++: virtual void PieceInvariantOff()\n\n"},
  {"SetDirection", PyvtkPolyDataSilhouette_SetDirection, METH_VARARGS,
   "SetDirection(self, _arg:int) -> None\nC++: virtual void SetDirection(int _arg)\n\nSpecify how view direction is computed. By default, the camera\norigin (eye) is used.\n"},
  {"GetDirection", PyvtkPolyDataSilhouette_GetDirection, METH_VARARGS,
   "GetDirection(self) -> int\nC++: virtual int GetDirection()\n\n"},
  {"SetDirectionToSpecifiedVector", PyvtkPolyDataSilhouette_SetDirectionToSpecifiedVector, METH_VARARGS,
   "SetDirectionToSpecifiedVector(self) -> None\nC++: void SetDirectionToSpecifiedVector()\n\n"},
  {"SetDirectionToSpecifiedOrigin", PyvtkPolyDataSilhouette_SetDirectionToSpecifiedOrigin, METH_VARARGS,
   "SetDirectionToSpecifiedOrigin(self) -> None\nC++: void SetDirectionToSpecifiedOrigin()\n\n"},
  {"SetDirectionToCameraVector", PyvtkPolyDataSilhouette_SetDirectionToCameraVector, METH_VARARGS,
   "SetDirectionToCameraVector(self) -> None\nC++: void SetDirectionToCameraVector()\n\n"},
  {"SetDirectionToCameraOrigin", PyvtkPolyDataSilhouette_SetDirectionToCameraOrigin, METH_VARARGS,
   "SetDirectionToCameraOrigin(self) -> None\nC++: void SetDirectionToCameraOrigin()\n\n"},
  {"SetCamera", PyvtkPolyDataSilhouette_SetCamera, METH_VARARGS,
   "SetCamera(self, __a:vtkCamera) -> None\nC++: virtual void SetCamera(vtkCamera *)\n\nSpecify a camera that is used to define the view direction.  This\nivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified.\n"},
  {"GetCamera", PyvtkPolyDataSilhouette_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\n"},
  {"SetProp3D", PyvtkPolyDataSilhouette_SetProp3D, METH_VARARGS,
   "SetProp3D(self, __a:vtkProp3D) -> None\nC++: void SetProp3D(vtkProp3D *)\n\nSpecify a transformation matrix (via the vtkProp3D::GetMatrix()\nmethod) that is used to include the effects of transformation.\nThis ivar only has effect if the direction is set to\nVTK_DIRECTION_CAMERA_ORIGIN or VTK_DIRECTION_CAMERA_VECTOR, and a\ncamera is specified. Specifying the vtkProp3D is optional.\n"},
  {"GetProp3D", PyvtkPolyDataSilhouette_GetProp3D, METH_VARARGS,
   "GetProp3D(self) -> vtkProp3D\nC++: vtkProp3D *GetProp3D()\n\n"},
  {"SetVector", PyvtkPolyDataSilhouette_SetVector, METH_VARARGS,
   "SetVector(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetVector(double _arg1, double _arg2,\n    double _arg3)\nSetVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetVector(const double _arg[3])\n\nSet/Get the sort direction. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedVector(). The edge\ndetection occurs in the direction of the vector.\n"},
  {"GetVector", PyvtkPolyDataSilhouette_GetVector, METH_VARARGS,
   "GetVector(self) -> (float, float, float)\nC++: virtual double *GetVector()\n\n"},
  {"SetOrigin", PyvtkPolyDataSilhouette_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSet/Get the sort origin. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedOrigin(). The edge\ndetection occurs in the direction of the origin to each edge's\ncenter.\n"},
  {"GetOrigin", PyvtkPolyDataSilhouette_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"GetMTime", PyvtkPolyDataSilhouette_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn MTime also considering the dependent objects: the camera\nand/or the prop3D.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataSilhouette_Doc =
  "vtkPolyDataSilhouette - sort polydata along camera view direction\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataSilhouette extracts a subset of a polygonal mesh edges to\n"
  "generate an outline (silhouette) of the corresponding 3D object. In\n"
  "addition, this filter can also extracts sharp edges (aka feature\n"
  "angles). In order to use this filter you must specify the a point of\n"
  "view (origin) or a direction (vector).  given this direction or\n"
  "origin, a silhouette is generated wherever the surface's normal is\n"
  "orthogonal to the view direction.\n\n"
  "@warning\n"
  "when the active camera is used, almost everything is recomputed for\n"
  "each frame, keep this in mind when dealing with extremely large\n"
  "surface data sets.\n\n"
  "@par Thanks: Contribution by Thierry Carrard\n\n"
  "CEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n\n"
  "BP12, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataSilhouette_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkPolyDataSilhouette", // tp_name
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
  PyvtkPolyDataSilhouette_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataSilhouette_StaticNew()
{
  return vtkPolyDataSilhouette::New();
}

PyObject *PyvtkPolyDataSilhouette_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataSilhouette_Type, PyvtkPolyDataSilhouette_Methods,
    "vtkPolyDataSilhouette",
 &PyvtkPolyDataSilhouette_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPolyDataSilhouette_Directions_Type);
  PyVTKEnum_Add(&PyvtkPolyDataSilhouette_Directions_Type, "vtkPolyDataSilhouette.Directions");

  o = (PyObject *)&PyvtkPolyDataSilhouette_Directions_Type;
  if (PyDict_SetItemString(d, "Directions", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkPolyDataSilhouette::Directions cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DIRECTION_SPECIFIED_VECTOR", vtkPolyDataSilhouette::VTK_DIRECTION_SPECIFIED_VECTOR },
        { "VTK_DIRECTION_SPECIFIED_ORIGIN", vtkPolyDataSilhouette::VTK_DIRECTION_SPECIFIED_ORIGIN },
        { "VTK_DIRECTION_CAMERA_ORIGIN", vtkPolyDataSilhouette::VTK_DIRECTION_CAMERA_ORIGIN },
        { "VTK_DIRECTION_CAMERA_VECTOR", vtkPolyDataSilhouette::VTK_DIRECTION_CAMERA_VECTOR },
      };

    o = PyvtkPolyDataSilhouette_Directions_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataSilhouette(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataSilhouette_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataSilhouette", o) != 0)
  {
    Py_DECREF(o);
  }

}

