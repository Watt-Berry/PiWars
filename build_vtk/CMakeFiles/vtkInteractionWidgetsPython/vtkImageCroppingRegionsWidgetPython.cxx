// python wrapper for vtkImageCroppingRegionsWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageCroppingRegionsWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCroppingRegionsWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkImageCroppingRegionsWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImageCroppingRegionsWidget.WidgetEventIds", // tp_name
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
PyObject *PyvtkImageCroppingRegionsWidget_WidgetEventIds_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type, static_cast<int>(val));
}


static PyObject *
PyvtkImageCroppingRegionsWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCroppingRegionsWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCroppingRegionsWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCroppingRegionsWidget *tempr = vtkImageCroppingRegionsWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCroppingRegionsWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCroppingRegionsWidget::NewInstance());

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
PyvtkImageCroppingRegionsWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageCroppingRegionsWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageCroppingRegionsWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::PlaceWidget(temp0);
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
PyvtkImageCroppingRegionsWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageCroppingRegionsWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkImageCroppingRegionsWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkImageCroppingRegionsWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetPlanePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlanePositions() :
      op->vtkImageCroppingRegionsWidget::GetPlanePositions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetPlanePositions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetPlanePositions(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetPlanePositions(temp0);
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
PyvtkImageCroppingRegionsWidget_SetPlanePositions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetPlanePositions(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetPlanePositions(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetPlanePositions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetPlanePositions_s1(self, args);
    case 6:
      return PyvtkImageCroppingRegionsWidget_SetPlanePositions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlanePositions");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlags(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetCroppingRegionFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingRegionFlags() :
      op->vtkImageCroppingRegionsWidget::GetCroppingRegionFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceOrientation() :
      op->vtkImageCroppingRegionsWidget::GetSliceOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientation(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientationToXY();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientationToXY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientationToYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientationToYZ();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientationToYZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientationToXZ();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSliceOrientationToXZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlice(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkImageCroppingRegionsWidget::GetSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine1Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine1Color(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine1Color(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine1Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine1Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine1Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine1Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine1Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine1Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLine1Color");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine1Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLine1Color() :
      op->vtkImageCroppingRegionsWidget::GetLine1Color());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine1Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine1Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->GetLine1Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::GetLine1Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine1Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine1Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine1Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLine1Color");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine2Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine2Color(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine2Color(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine2Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine2Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine2Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine2Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine2Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine2Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLine2Color");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine2Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLine2Color() :
      op->vtkImageCroppingRegionsWidget::GetLine2Color());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine2Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine2Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->GetLine2Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::GetLine2Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine2Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine2Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine2Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLine2Color");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine3Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine3Color(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine3Color(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine3Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine3Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine3Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine3Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine3Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine3Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLine3Color");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine3Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLine3Color() :
      op->vtkImageCroppingRegionsWidget::GetLine3Color());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine3Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine3Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->GetLine3Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::GetLine3Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine3Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine3Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine3Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLine3Color");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine4Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine4Color(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine4Color(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_SetLine4Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->SetLine4Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetLine4Color(temp0);
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
PyvtkImageCroppingRegionsWidget_SetLine4Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCroppingRegionsWidget_SetLine4Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_SetLine4Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLine4Color");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine4Color_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLine4Color() :
      op->vtkImageCroppingRegionsWidget::GetLine4Color());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageCroppingRegionsWidget_GetLine4Color_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLine4Color");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

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
      op->GetLine4Color(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::GetLine4Color(temp0);
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
PyvtkImageCroppingRegionsWidget_GetLine4Color(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageCroppingRegionsWidget_GetLine4Color_s1(self, args);
    case 1:
      return PyvtkImageCroppingRegionsWidget_GetLine4Color_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLine4Color");
  return nullptr;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_SetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  vtkVolumeMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->SetVolumeMapper(temp0);
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::SetVolumeMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_GetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeMapper *tempr = (ap.IsBound() ?
      op->GetVolumeMapper() :
      op->vtkImageCroppingRegionsWidget::GetVolumeMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_UpdateAccordingToInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAccordingToInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAccordingToInput();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::UpdateAccordingToInput();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_MoveHorizontalLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveHorizontalLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveHorizontalLine();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::MoveHorizontalLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_MoveVerticalLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveVerticalLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveVerticalLine();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::MoveVerticalLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_MoveIntersectingLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveIntersectingLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveIntersectingLines();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::MoveIntersectingLines();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_UpdateCursorIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCursorIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateCursorIcon();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::UpdateCursorIcon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_OnButtonPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnButtonPress();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::OnButtonPress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_OnButtonRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnButtonRelease();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::OnButtonRelease();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCroppingRegionsWidget_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCroppingRegionsWidget *op = static_cast<vtkImageCroppingRegionsWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkImageCroppingRegionsWidget::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCroppingRegionsWidget_Methods[] = {
  {"IsTypeOf", PyvtkImageCroppingRegionsWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageCroppingRegionsWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageCroppingRegionsWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageCroppingRegionsWidget\nC++: static vtkImageCroppingRegionsWidget *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageCroppingRegionsWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageCroppingRegionsWidget\nC++: vtkImageCroppingRegionsWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageCroppingRegionsWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageCroppingRegionsWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"PlaceWidget", PyvtkImageCroppingRegionsWidget_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\nPlaceWidget(self) -> None\nC++: virtual void PlaceWidget()\nPlaceWidget(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: virtual void PlaceWidget(double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nThis method is used to initially place the widget.  The placement\nof the widget depends on whether a Prop3D or input dataset is\nprovided. If one of these two is provided, they will be used to\nobtain a bounding box, around which the widget is placed.\nOtherwise, you can manually specify a bounds with the\nPlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required\nby all subclasses; the other methods are provided as convenience\nmethods.\n"},
  {"SetEnabled", PyvtkImageCroppingRegionsWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabling:int) -> None\nC++: void SetEnabled(int enabling) override;\n\nEnable/disable the widget\n"},
  {"GetPlanePositions", PyvtkImageCroppingRegionsWidget_GetPlanePositions, METH_VARARGS,
   "GetPlanePositions(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetPlanePositions()\n\nSet/Get the plane positions that represent the cropped region.\n"},
  {"SetPlanePositions", PyvtkImageCroppingRegionsWidget_SetPlanePositions, METH_VARARGS,
   "SetPlanePositions(self, pos:[float, float, float, float, float,\n    float]) -> None\nC++: virtual void SetPlanePositions(double pos[6])\nSetPlanePositions(self, xMin:float, xMax:float, yMin:float,\n    yMax:float, zMin:float, zMax:float) -> None\nC++: virtual void SetPlanePositions(double xMin, double xMax,\n    double yMin, double yMax, double zMin, double zMax)\n\n"},
  {"SetCroppingRegionFlags", PyvtkImageCroppingRegionsWidget_SetCroppingRegionFlags, METH_VARARGS,
   "SetCroppingRegionFlags(self, flags:int) -> None\nC++: virtual void SetCroppingRegionFlags(int flags)\n\nSet/Get the cropping region flags\n"},
  {"GetCroppingRegionFlags", PyvtkImageCroppingRegionsWidget_GetCroppingRegionFlags, METH_VARARGS,
   "GetCroppingRegionFlags(self) -> int\nC++: virtual int GetCroppingRegionFlags()\n\n"},
  {"GetSliceOrientation", PyvtkImageCroppingRegionsWidget_GetSliceOrientation, METH_VARARGS,
   "GetSliceOrientation(self) -> int\nC++: virtual int GetSliceOrientation()\n\n"},
  {"SetSliceOrientation", PyvtkImageCroppingRegionsWidget_SetSliceOrientation, METH_VARARGS,
   "SetSliceOrientation(self, orientation:int) -> None\nC++: virtual void SetSliceOrientation(int orientation)\n\n"},
  {"SetSliceOrientationToXY", PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXY, METH_VARARGS,
   "SetSliceOrientationToXY(self) -> None\nC++: virtual void SetSliceOrientationToXY()\n\n"},
  {"SetSliceOrientationToYZ", PyvtkImageCroppingRegionsWidget_SetSliceOrientationToYZ, METH_VARARGS,
   "SetSliceOrientationToYZ(self) -> None\nC++: virtual void SetSliceOrientationToYZ()\n\n"},
  {"SetSliceOrientationToXZ", PyvtkImageCroppingRegionsWidget_SetSliceOrientationToXZ, METH_VARARGS,
   "SetSliceOrientationToXZ(self) -> None\nC++: virtual void SetSliceOrientationToXZ()\n\n"},
  {"SetSlice", PyvtkImageCroppingRegionsWidget_SetSlice, METH_VARARGS,
   "SetSlice(self, num:int) -> None\nC++: virtual void SetSlice(int num)\n\nSet/Get the slice number\n"},
  {"GetSlice", PyvtkImageCroppingRegionsWidget_GetSlice, METH_VARARGS,
   "GetSlice(self) -> int\nC++: virtual int GetSlice()\n\n"},
  {"SetLine1Color", PyvtkImageCroppingRegionsWidget_SetLine1Color, METH_VARARGS,
   "SetLine1Color(self, r:float, g:float, b:float) -> None\nC++: virtual void SetLine1Color(double r, double g, double b)\nSetLine1Color(self, rgb:[float, float, float]) -> None\nC++: virtual void SetLine1Color(double rgb[3])\n\nSet/Get line 1 color\n"},
  {"GetLine1Color", PyvtkImageCroppingRegionsWidget_GetLine1Color, METH_VARARGS,
   "GetLine1Color(self) -> Pointer\nC++: virtual double *GetLine1Color()\nGetLine1Color(self, rgb:[float, float, float]) -> None\nC++: virtual void GetLine1Color(double rgb[3])\n\n"},
  {"SetLine2Color", PyvtkImageCroppingRegionsWidget_SetLine2Color, METH_VARARGS,
   "SetLine2Color(self, r:float, g:float, b:float) -> None\nC++: virtual void SetLine2Color(double r, double g, double b)\nSetLine2Color(self, rgb:[float, float, float]) -> None\nC++: virtual void SetLine2Color(double rgb[3])\n\nSet/Get line 2 color\n"},
  {"GetLine2Color", PyvtkImageCroppingRegionsWidget_GetLine2Color, METH_VARARGS,
   "GetLine2Color(self) -> Pointer\nC++: virtual double *GetLine2Color()\nGetLine2Color(self, rgb:[float, float, float]) -> None\nC++: virtual void GetLine2Color(double rgb[3])\n\n"},
  {"SetLine3Color", PyvtkImageCroppingRegionsWidget_SetLine3Color, METH_VARARGS,
   "SetLine3Color(self, r:float, g:float, b:float) -> None\nC++: virtual void SetLine3Color(double r, double g, double b)\nSetLine3Color(self, rgb:[float, float, float]) -> None\nC++: virtual void SetLine3Color(double rgb[3])\n\nSet/Get line 3 color\n"},
  {"GetLine3Color", PyvtkImageCroppingRegionsWidget_GetLine3Color, METH_VARARGS,
   "GetLine3Color(self) -> Pointer\nC++: virtual double *GetLine3Color()\nGetLine3Color(self, rgb:[float, float, float]) -> None\nC++: virtual void GetLine3Color(double rgb[3])\n\n"},
  {"SetLine4Color", PyvtkImageCroppingRegionsWidget_SetLine4Color, METH_VARARGS,
   "SetLine4Color(self, r:float, g:float, b:float) -> None\nC++: virtual void SetLine4Color(double r, double g, double b)\nSetLine4Color(self, rgb:[float, float, float]) -> None\nC++: virtual void SetLine4Color(double rgb[3])\n\nSet/Get line 4 color\n"},
  {"GetLine4Color", PyvtkImageCroppingRegionsWidget_GetLine4Color, METH_VARARGS,
   "GetLine4Color(self) -> Pointer\nC++: virtual double *GetLine4Color()\nGetLine4Color(self, rgb:[float, float, float]) -> None\nC++: virtual void GetLine4Color(double rgb[3])\n\n"},
  {"SetVolumeMapper", PyvtkImageCroppingRegionsWidget_SetVolumeMapper, METH_VARARGS,
   "SetVolumeMapper(self, mapper:vtkVolumeMapper) -> None\nC++: virtual void SetVolumeMapper(vtkVolumeMapper *mapper)\n\nSet/Get the input volume mapper Update the widget according to\nits mapper\n"},
  {"GetVolumeMapper", PyvtkImageCroppingRegionsWidget_GetVolumeMapper, METH_VARARGS,
   "GetVolumeMapper(self) -> vtkVolumeMapper\nC++: virtual vtkVolumeMapper *GetVolumeMapper()\n\n"},
  {"UpdateAccordingToInput", PyvtkImageCroppingRegionsWidget_UpdateAccordingToInput, METH_VARARGS,
   "UpdateAccordingToInput(self) -> None\nC++: virtual void UpdateAccordingToInput()\n\n"},
  {"MoveHorizontalLine", PyvtkImageCroppingRegionsWidget_MoveHorizontalLine, METH_VARARGS,
   "MoveHorizontalLine(self) -> None\nC++: void MoveHorizontalLine()\n\nCallbacks for user interaction.\n"},
  {"MoveVerticalLine", PyvtkImageCroppingRegionsWidget_MoveVerticalLine, METH_VARARGS,
   "MoveVerticalLine(self) -> None\nC++: void MoveVerticalLine()\n\n"},
  {"MoveIntersectingLines", PyvtkImageCroppingRegionsWidget_MoveIntersectingLines, METH_VARARGS,
   "MoveIntersectingLines(self) -> None\nC++: void MoveIntersectingLines()\n\n"},
  {"UpdateCursorIcon", PyvtkImageCroppingRegionsWidget_UpdateCursorIcon, METH_VARARGS,
   "UpdateCursorIcon(self) -> None\nC++: void UpdateCursorIcon()\n\n"},
  {"OnButtonPress", PyvtkImageCroppingRegionsWidget_OnButtonPress, METH_VARARGS,
   "OnButtonPress(self) -> None\nC++: void OnButtonPress()\n\n"},
  {"OnButtonRelease", PyvtkImageCroppingRegionsWidget_OnButtonRelease, METH_VARARGS,
   "OnButtonRelease(self) -> None\nC++: void OnButtonRelease()\n\n"},
  {"OnMouseMove", PyvtkImageCroppingRegionsWidget_OnMouseMove, METH_VARARGS,
   "OnMouseMove(self) -> None\nC++: void OnMouseMove()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageCroppingRegionsWidget_Doc =
  "vtkImageCroppingRegionsWidget - widget for cropping an image\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This widget displays a set of axis aligned lines that can be\n"
  "interactively manipulated to crop a volume. The region to be cropped\n"
  "away is displayed in a different highlight. Much like the\n"
  "vtkVolumeMapper, this widget supports 27 possible configurations of\n"
  "cropping planes. (See CroppingRegionFlags). If a volume mapper is\n"
  "set, the cropping planes are directly propagated to the volume\n"
  "mapper. The widget invokes a CroppingPlanesPositionChangedEvent when\n"
  "the position of any of the cropping planes is changed. The widget\n"
  "also invokes an InteractionEvent in response to user interaction.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageCroppingRegionsWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImageCroppingRegionsWidget", // tp_name
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
  PyvtkImageCroppingRegionsWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageCroppingRegionsWidget_StaticNew()
{
  return vtkImageCroppingRegionsWidget::New();
}

PyObject *PyvtkImageCroppingRegionsWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageCroppingRegionsWidget_Type, PyvtkImageCroppingRegionsWidget_Methods,
    "vtkImageCroppingRegionsWidget",
 &PyvtkImageCroppingRegionsWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)Pyvtk3DWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type);
  PyVTKEnum_Add(&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type, "vtkImageCroppingRegionsWidget.WidgetEventIds");

  o = (PyObject *)&PyvtkImageCroppingRegionsWidget_WidgetEventIds_Type;
  if (PyDict_SetItemString(d, "WidgetEventIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "SLICE_ORIENTATION_YZ", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_YZ },
        { "SLICE_ORIENTATION_XZ", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_XZ },
        { "SLICE_ORIENTATION_XY", vtkImageCroppingRegionsWidget::SLICE_ORIENTATION_XY },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 1; c++)
  {
    typedef vtkImageCroppingRegionsWidget::WidgetEventIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[1] = {
        { "CroppingPlanesPositionChangedEvent", vtkImageCroppingRegionsWidget::CroppingPlanesPositionChangedEvent },
      };

    o = PyvtkImageCroppingRegionsWidget_WidgetEventIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageCroppingRegionsWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCroppingRegionsWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCroppingRegionsWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

