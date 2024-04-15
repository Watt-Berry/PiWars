// python wrapper for vtkBalloonRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBalloonRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBalloonRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkBalloonRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBalloonRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBalloonRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkBalloonRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkBalloonRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkBalloonRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBalloonRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBalloonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBalloonRepresentation *tempr = vtkBalloonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBalloonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBalloonRepresentation::NewInstance());

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
PyvtkBalloonRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBalloonRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBalloonRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetBalloonImage(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetBalloonImage() :
      op->vtkBalloonRepresentation::GetBalloonImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetBalloonText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBalloonText() :
      op->vtkBalloonRepresentation::GetBalloonText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonText(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetImageSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImageSize(temp0, temp1);
    }
    else
    {
      op->vtkBalloonRepresentation::SetImageSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetImageSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetImageSize(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetImageSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetImageSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBalloonRepresentation_SetImageSize_s1(self, args);
    case 1:
      return PyvtkBalloonRepresentation_SetImageSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImageSize");
  return nullptr;
}


static PyObject *
PyvtkBalloonRepresentation_GetImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageSize() :
      op->vtkBalloonRepresentation::GetImageSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkBalloonRepresentation::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetFrameProperty(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetFrameProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetFrameProperty() :
      op->vtkBalloonRepresentation::GetFrameProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetImageProperty(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetImageProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetImageProperty() :
      op->vtkBalloonRepresentation::GetImageProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayout(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetBalloonLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBalloonLayout() :
      op->vtkBalloonRepresentation::GetBalloonLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToImageLeft();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToImageRight();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToImageBottom();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageBottom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToImageTop();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageTop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToTextLeft();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToTextRight();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToTextTop();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextTop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBalloonLayoutToTextBottom();
    }
    else
    {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextBottom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0, temp1);
    }
    else
    {
      op->vtkBalloonRepresentation::SetOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
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
      op->vtkBalloonRepresentation::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBalloonRepresentation_SetOffset_s1(self, args);
    case 1:
      return PyvtkBalloonRepresentation_SetOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOffset");
  return nullptr;
}


static PyObject *
PyvtkBalloonRepresentation_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkBalloonRepresentation::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkBalloonRepresentation::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkBalloonRepresentation::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkBalloonRepresentation::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::StartWidgetInteraction(temp0);
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
PyvtkBalloonRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->EndWidgetInteraction(temp0);
    }
    else
    {
      op->vtkBalloonRepresentation::EndWidgetInteraction(temp0);
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
PyvtkBalloonRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkBalloonRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkBalloonRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      op->vtkBalloonRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkBalloonRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBalloonRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkBalloonRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBalloonRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBalloonRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBalloonRepresentation\nC++: static vtkBalloonRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBalloonRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBalloonRepresentation\nC++: vtkBalloonRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBalloonRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBalloonRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetBalloonImage", PyvtkBalloonRepresentation_SetBalloonImage, METH_VARARGS,
   "SetBalloonImage(self, img:vtkImageData) -> None\nC++: virtual void SetBalloonImage(vtkImageData *img)\n\nSpecify/retrieve the image to display in the balloon.\n"},
  {"GetBalloonImage", PyvtkBalloonRepresentation_GetBalloonImage, METH_VARARGS,
   "GetBalloonImage(self) -> vtkImageData\nC++: virtual vtkImageData *GetBalloonImage()\n\n"},
  {"GetBalloonText", PyvtkBalloonRepresentation_GetBalloonText, METH_VARARGS,
   "GetBalloonText(self) -> str\nC++: virtual char *GetBalloonText()\n\nSpecify/retrieve the text to display in the balloon.\n"},
  {"SetBalloonText", PyvtkBalloonRepresentation_SetBalloonText, METH_VARARGS,
   "SetBalloonText(self, _arg:str) -> None\nC++: virtual void SetBalloonText(const char *_arg)\n\n"},
  {"SetImageSize", PyvtkBalloonRepresentation_SetImageSize, METH_VARARGS,
   "SetImageSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetImageSize(int _arg1, int _arg2)\nSetImageSize(self, _arg:(int, int)) -> None\nC++: void SetImageSize(const int _arg[2])\n\nSpecify the minimum size for the image. Note that this is a\nbounding rectangle, the image will fit inside of it. However, if\nthe balloon consists of text plus an image, then the image may be\nbigger than ImageSize[2] to fit into the balloon frame.\n"},
  {"GetImageSize", PyvtkBalloonRepresentation_GetImageSize, METH_VARARGS,
   "GetImageSize(self) -> (int, int)\nC++: virtual int *GetImageSize()\n\n"},
  {"SetTextProperty", PyvtkBalloonRepresentation_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/get the text property (relevant only if text is shown).\n"},
  {"GetTextProperty", PyvtkBalloonRepresentation_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\n"},
  {"SetFrameProperty", PyvtkBalloonRepresentation_SetFrameProperty, METH_VARARGS,
   "SetFrameProperty(self, p:vtkProperty2D) -> None\nC++: virtual void SetFrameProperty(vtkProperty2D *p)\n\nSet/get the frame property (relevant only if text is shown). The\nframe lies behind the text.\n"},
  {"GetFrameProperty", PyvtkBalloonRepresentation_GetFrameProperty, METH_VARARGS,
   "GetFrameProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetFrameProperty()\n\n"},
  {"SetImageProperty", PyvtkBalloonRepresentation_SetImageProperty, METH_VARARGS,
   "SetImageProperty(self, p:vtkProperty2D) -> None\nC++: virtual void SetImageProperty(vtkProperty2D *p)\n\nSet/get the image property (relevant only if an image is shown).\n"},
  {"GetImageProperty", PyvtkBalloonRepresentation_GetImageProperty, METH_VARARGS,
   "GetImageProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetImageProperty()\n\n"},
  {"SetBalloonLayout", PyvtkBalloonRepresentation_SetBalloonLayout, METH_VARARGS,
   "SetBalloonLayout(self, _arg:int) -> None\nC++: virtual void SetBalloonLayout(int _arg)\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {"GetBalloonLayout", PyvtkBalloonRepresentation_GetBalloonLayout, METH_VARARGS,
   "GetBalloonLayout(self) -> int\nC++: virtual int GetBalloonLayout()\n\n"},
  {"SetBalloonLayoutToImageLeft", PyvtkBalloonRepresentation_SetBalloonLayoutToImageLeft, METH_VARARGS,
   "SetBalloonLayoutToImageLeft(self) -> None\nC++: void SetBalloonLayoutToImageLeft()\n\n"},
  {"SetBalloonLayoutToImageRight", PyvtkBalloonRepresentation_SetBalloonLayoutToImageRight, METH_VARARGS,
   "SetBalloonLayoutToImageRight(self) -> None\nC++: void SetBalloonLayoutToImageRight()\n\n"},
  {"SetBalloonLayoutToImageBottom", PyvtkBalloonRepresentation_SetBalloonLayoutToImageBottom, METH_VARARGS,
   "SetBalloonLayoutToImageBottom(self) -> None\nC++: void SetBalloonLayoutToImageBottom()\n\n"},
  {"SetBalloonLayoutToImageTop", PyvtkBalloonRepresentation_SetBalloonLayoutToImageTop, METH_VARARGS,
   "SetBalloonLayoutToImageTop(self) -> None\nC++: void SetBalloonLayoutToImageTop()\n\n"},
  {"SetBalloonLayoutToTextLeft", PyvtkBalloonRepresentation_SetBalloonLayoutToTextLeft, METH_VARARGS,
   "SetBalloonLayoutToTextLeft(self) -> None\nC++: void SetBalloonLayoutToTextLeft()\n\n"},
  {"SetBalloonLayoutToTextRight", PyvtkBalloonRepresentation_SetBalloonLayoutToTextRight, METH_VARARGS,
   "SetBalloonLayoutToTextRight(self) -> None\nC++: void SetBalloonLayoutToTextRight()\n\n"},
  {"SetBalloonLayoutToTextTop", PyvtkBalloonRepresentation_SetBalloonLayoutToTextTop, METH_VARARGS,
   "SetBalloonLayoutToTextTop(self) -> None\nC++: void SetBalloonLayoutToTextTop()\n\n"},
  {"SetBalloonLayoutToTextBottom", PyvtkBalloonRepresentation_SetBalloonLayoutToTextBottom, METH_VARARGS,
   "SetBalloonLayoutToTextBottom(self) -> None\nC++: void SetBalloonLayoutToTextBottom()\n\n"},
  {"SetOffset", PyvtkBalloonRepresentation_SetOffset, METH_VARARGS,
   "SetOffset(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetOffset(int _arg1, int _arg2)\nSetOffset(self, _arg:(int, int)) -> None\nC++: void SetOffset(const int _arg[2])\n\nSet/Get the offset from the mouse pointer from which to place the\nballoon. The representation will try and honor this offset unless\nthere is a collision with the side of the renderer, in which case\nthe balloon will be repositioned to lie within the rendering\nwindow.\n"},
  {"GetOffset", PyvtkBalloonRepresentation_GetOffset, METH_VARARGS,
   "GetOffset(self) -> (int, int)\nC++: virtual int *GetOffset()\n\n"},
  {"SetPadding", PyvtkBalloonRepresentation_SetPadding, METH_VARARGS,
   "SetPadding(self, _arg:int) -> None\nC++: virtual void SetPadding(int _arg)\n\nSet/Get the padding (in pixels) that is used between the text and\nthe frame.\n"},
  {"GetPaddingMinValue", PyvtkBalloonRepresentation_GetPaddingMinValue, METH_VARARGS,
   "GetPaddingMinValue(self) -> int\nC++: virtual int GetPaddingMinValue()\n\n"},
  {"GetPaddingMaxValue", PyvtkBalloonRepresentation_GetPaddingMaxValue, METH_VARARGS,
   "GetPaddingMaxValue(self) -> int\nC++: virtual int GetPaddingMaxValue()\n\n"},
  {"GetPadding", PyvtkBalloonRepresentation_GetPadding, METH_VARARGS,
   "GetPadding(self) -> int\nC++: virtual int GetPadding()\n\n"},
  {"StartWidgetInteraction", PyvtkBalloonRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, e:[float, float]) -> None\nC++: void StartWidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"EndWidgetInteraction", PyvtkBalloonRepresentation_EndWidgetInteraction, METH_VARARGS,
   "EndWidgetInteraction(self, e:[float, float]) -> None\nC++: void EndWidgetInteraction(double e[2]) override;\n\n"},
  {"BuildRepresentation", PyvtkBalloonRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"ComputeInteractionState", PyvtkBalloonRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkBalloonRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkBalloonRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBalloonRepresentation_Doc =
  "vtkBalloonRepresentation - represent the vtkBalloonWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkBalloonRepresentation is used to represent the\n"
  "vtkBalloonWidget. This representation is defined by two items: a text\n"
  "string and an image. At least one of these two items must be defined,\n"
  "but it is allowable to specify both, or just an image or just text.\n"
  "If both the text and image are specified, then methods are available\n"
  "for positioning the text and image with respect to each other.\n\n"
  "The balloon representation consists of three parts: text, a\n"
  "rectangular frame behind the text, and an image placed next to the\n"
  "frame and sized to match the frame.\n\n"
  "The size of the balloon is ultimately controlled by the text\n"
  "properties (i.e., font size). This representation uses a layout\n"
  "policy as follows.\n\n"
  "If there is just text and no image, then the text properties and\n"
  "padding are used to control the size of the balloon.\n\n"
  "If there is just an image and no text, then the ImageSize[2] member\n"
  "is used to control the image size. (The image will fit into this\n"
  "rectangle, but will not necessarily fill the whole rectangle, i.e.,\n"
  "the image is not stretched).\n\n"
  "If there is text and an image, the following approach ia used. First,\n"
  "based on the font size and other related properties (e.g., padding),\n"
  "determine the size of the frame. Second, depending on the layout of\n"
  "the image and text frame, control the size of the neighboring image\n"
  "(since the frame and image share a common edge). However, if this\n"
  "results in an image that is smaller than ImageSize[2], then the image\n"
  "size will be set to ImageSize[2] and the frame will be adjusted\n"
  "accordingly. The text is always placed in the center of the frame if\n"
  "the frame is resized.\n\n"
  "@sa\n"
  "vtkBalloonWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBalloonRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBalloonRepresentation", // tp_name
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
  PyvtkBalloonRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBalloonRepresentation_StaticNew()
{
  return vtkBalloonRepresentation::New();
}

PyObject *PyvtkBalloonRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBalloonRepresentation_Type, PyvtkBalloonRepresentation_Methods,
    "vtkBalloonRepresentation",
 &PyvtkBalloonRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBalloonRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkBalloonRepresentation_InteractionStateType_Type, "vtkBalloonRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkBalloonRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "ImageLeft", vtkBalloonRepresentation::ImageLeft },
        { "ImageRight", vtkBalloonRepresentation::ImageRight },
        { "ImageBottom", vtkBalloonRepresentation::ImageBottom },
        { "ImageTop", vtkBalloonRepresentation::ImageTop },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkBalloonRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "Outside", vtkBalloonRepresentation::Outside },
        { "OnText", vtkBalloonRepresentation::OnText },
        { "OnImage", vtkBalloonRepresentation::OnImage },
      };

    o = PyvtkBalloonRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBalloonRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBalloonRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBalloonRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

