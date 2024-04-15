// python wrapper for vtkCornerAnnotation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCornerAnnotation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCornerAnnotation(PyObject *dict); }
extern "C" { PyObject *PyvtkCornerAnnotation_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCornerAnnotation_TextPosition_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkCornerAnnotation.TextPosition", // tp_name
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
PyObject *PyvtkCornerAnnotation_TextPosition_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCornerAnnotation_TextPosition_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCornerAnnotation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCornerAnnotation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCornerAnnotation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCornerAnnotation *tempr = vtkCornerAnnotation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCornerAnnotation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCornerAnnotation::NewInstance());

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
PyvtkCornerAnnotation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCornerAnnotation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCornerAnnotation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCornerAnnotation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCornerAnnotation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCornerAnnotation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCornerAnnotation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLineHeight(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetMaximumLineHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLineHeight() :
      op->vtkCornerAnnotation::GetMaximumLineHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMinimumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumFontSize(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetMinimumFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMinimumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumFontSize() :
      op->vtkCornerAnnotation::GetMinimumFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetMaximumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumFontSize(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetMaximumFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetMaximumFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumFontSize() :
      op->vtkCornerAnnotation::GetMaximumFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLinearFontScaleFactor(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetLinearFontScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLinearFontScaleFactor() :
      op->vtkCornerAnnotation::GetLinearFontScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetNonlinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonlinearFontScaleFactor(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetNonlinearFontScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetNonlinearFontScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearFontScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNonlinearFontScaleFactor() :
      op->vtkCornerAnnotation::GetNonlinearFontScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      op->vtkCornerAnnotation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetText(temp0, temp1);
    }
    else
    {
      op->vtkCornerAnnotation::SetText(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetText(temp0) :
      op->vtkCornerAnnotation::GetText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ClearAllTexts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllTexts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllTexts();
    }
    else
    {
      op->vtkCornerAnnotation::ClearAllTexts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_CopyAllTextsFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllTextsFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkCornerAnnotation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCornerAnnotation"))
  {
    if (ap.IsBound())
    {
      op->CopyAllTextsFrom(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::CopyAllTextsFrom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
  {
    if (ap.IsBound())
    {
      op->SetImageActor(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetImageActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkCornerAnnotation::GetImageActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  vtkImageMapToWindowLevelColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToWindowLevelColors"))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevel(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetWindowLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToWindowLevelColors *tempr = (ap.IsBound() ?
      op->GetWindowLevel() :
      op->vtkCornerAnnotation::GetWindowLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLevelShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevelShift(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetLevelShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLevelShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevelShift() :
      op->vtkCornerAnnotation::GetLevelShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetLevelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevelScale(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetLevelScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetLevelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevelScale() :
      op->vtkCornerAnnotation::GetLevelScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

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
      op->vtkCornerAnnotation::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkCornerAnnotation::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ShowSliceAndImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliceAndImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSliceAndImageOn();
    }
    else
    {
      op->vtkCornerAnnotation::ShowSliceAndImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_ShowSliceAndImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliceAndImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSliceAndImageOff();
    }
    else
    {
      op->vtkCornerAnnotation::ShowSliceAndImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_SetShowSliceAndImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSliceAndImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowSliceAndImage(temp0);
    }
    else
    {
      op->vtkCornerAnnotation::SetShowSliceAndImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCornerAnnotation_GetShowSliceAndImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowSliceAndImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCornerAnnotation *op = static_cast<vtkCornerAnnotation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowSliceAndImage() :
      op->vtkCornerAnnotation::GetShowSliceAndImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCornerAnnotation_Methods[] = {
  {"IsTypeOf", PyvtkCornerAnnotation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCornerAnnotation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCornerAnnotation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCornerAnnotation\nC++: static vtkCornerAnnotation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCornerAnnotation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCornerAnnotation\nC++: vtkCornerAnnotation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCornerAnnotation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCornerAnnotation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOpaqueGeometry", PyvtkCornerAnnotation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCornerAnnotation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"RenderOverlay", PyvtkCornerAnnotation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCornerAnnotation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"SetMaximumLineHeight", PyvtkCornerAnnotation_SetMaximumLineHeight, METH_VARARGS,
   "SetMaximumLineHeight(self, _arg:float) -> None\nC++: virtual void SetMaximumLineHeight(double _arg)\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0\n"},
  {"GetMaximumLineHeight", PyvtkCornerAnnotation_GetMaximumLineHeight, METH_VARARGS,
   "GetMaximumLineHeight(self) -> float\nC++: virtual double GetMaximumLineHeight()\n\n"},
  {"SetMinimumFontSize", PyvtkCornerAnnotation_SetMinimumFontSize, METH_VARARGS,
   "SetMinimumFontSize(self, _arg:int) -> None\nC++: virtual void SetMinimumFontSize(int _arg)\n\nSet/Get the minimum/maximum size font that will be shown. If the\nfont drops below the minimum size it will not be rendered.\n"},
  {"GetMinimumFontSize", PyvtkCornerAnnotation_GetMinimumFontSize, METH_VARARGS,
   "GetMinimumFontSize(self) -> int\nC++: virtual int GetMinimumFontSize()\n\n"},
  {"SetMaximumFontSize", PyvtkCornerAnnotation_SetMaximumFontSize, METH_VARARGS,
   "SetMaximumFontSize(self, _arg:int) -> None\nC++: virtual void SetMaximumFontSize(int _arg)\n\n"},
  {"GetMaximumFontSize", PyvtkCornerAnnotation_GetMaximumFontSize, METH_VARARGS,
   "GetMaximumFontSize(self) -> int\nC++: virtual int GetMaximumFontSize()\n\n"},
  {"SetLinearFontScaleFactor", PyvtkCornerAnnotation_SetLinearFontScaleFactor, METH_VARARGS,
   "SetLinearFontScaleFactor(self, _arg:float) -> None\nC++: virtual void SetLinearFontScaleFactor(double _arg)\n\nSet/Get font scaling factors The font size, f, is calculated as\nthe largest possible value such that the annotations for the\ngiven viewport do not overlap. This font size is scaled\nnon-linearly with the viewport size, to maintain an acceptable\nreadable size at larger viewport sizes, without being too big. f'\n= linearScale * pow(f,nonlinearScale)\n"},
  {"GetLinearFontScaleFactor", PyvtkCornerAnnotation_GetLinearFontScaleFactor, METH_VARARGS,
   "GetLinearFontScaleFactor(self) -> float\nC++: virtual double GetLinearFontScaleFactor()\n\n"},
  {"SetNonlinearFontScaleFactor", PyvtkCornerAnnotation_SetNonlinearFontScaleFactor, METH_VARARGS,
   "SetNonlinearFontScaleFactor(self, _arg:float) -> None\nC++: virtual void SetNonlinearFontScaleFactor(double _arg)\n\n"},
  {"GetNonlinearFontScaleFactor", PyvtkCornerAnnotation_GetNonlinearFontScaleFactor, METH_VARARGS,
   "GetNonlinearFontScaleFactor(self) -> float\nC++: virtual double GetNonlinearFontScaleFactor()\n\n"},
  {"ReleaseGraphicsResources", PyvtkCornerAnnotation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetText", PyvtkCornerAnnotation_SetText, METH_VARARGS,
   "SetText(self, i:int, text:str) -> None\nC++: void SetText(int i, const char *text)\n\nSet/Get the text to be displayed for each corner\n\\sa TextPosition\n"},
  {"GetText", PyvtkCornerAnnotation_GetText, METH_VARARGS,
   "GetText(self, i:int) -> str\nC++: const char *GetText(int i)\n\n"},
  {"ClearAllTexts", PyvtkCornerAnnotation_ClearAllTexts, METH_VARARGS,
   "ClearAllTexts(self) -> None\nC++: void ClearAllTexts()\n\n"},
  {"CopyAllTextsFrom", PyvtkCornerAnnotation_CopyAllTextsFrom, METH_VARARGS,
   "CopyAllTextsFrom(self, ca:vtkCornerAnnotation) -> None\nC++: void CopyAllTextsFrom(vtkCornerAnnotation *ca)\n\n"},
  {"SetImageActor", PyvtkCornerAnnotation_SetImageActor, METH_VARARGS,
   "SetImageActor(self, __a:vtkImageActor) -> None\nC++: void SetImageActor(vtkImageActor *)\n\nSet an image actor to look at for slice information\n"},
  {"GetImageActor", PyvtkCornerAnnotation_GetImageActor, METH_VARARGS,
   "GetImageActor(self) -> vtkImageActor\nC++: virtual vtkImageActor *GetImageActor()\n\n"},
  {"SetWindowLevel", PyvtkCornerAnnotation_SetWindowLevel, METH_VARARGS,
   "SetWindowLevel(self, __a:vtkImageMapToWindowLevelColors) -> None\nC++: void SetWindowLevel(vtkImageMapToWindowLevelColors *)\n\nSet an instance of vtkImageMapToWindowLevelColors to use for\nlooking at window level changes\n"},
  {"GetWindowLevel", PyvtkCornerAnnotation_GetWindowLevel, METH_VARARGS,
   "GetWindowLevel(self) -> vtkImageMapToWindowLevelColors\nC++: virtual vtkImageMapToWindowLevelColors *GetWindowLevel()\n\n"},
  {"SetLevelShift", PyvtkCornerAnnotation_SetLevelShift, METH_VARARGS,
   "SetLevelShift(self, _arg:float) -> None\nC++: virtual void SetLevelShift(double _arg)\n\nSet the value to shift the level by.\n"},
  {"GetLevelShift", PyvtkCornerAnnotation_GetLevelShift, METH_VARARGS,
   "GetLevelShift(self) -> float\nC++: virtual double GetLevelShift()\n\n"},
  {"SetLevelScale", PyvtkCornerAnnotation_SetLevelScale, METH_VARARGS,
   "SetLevelScale(self, _arg:float) -> None\nC++: virtual void SetLevelScale(double _arg)\n\nSet the value to scale the level by.\n"},
  {"GetLevelScale", PyvtkCornerAnnotation_GetLevelScale, METH_VARARGS,
   "GetLevelScale(self) -> float\nC++: virtual double GetLevelScale()\n\n"},
  {"SetTextProperty", PyvtkCornerAnnotation_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property of all corners.\n"},
  {"GetTextProperty", PyvtkCornerAnnotation_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\n"},
  {"ShowSliceAndImageOn", PyvtkCornerAnnotation_ShowSliceAndImageOn, METH_VARARGS,
   "ShowSliceAndImageOn(self) -> None\nC++: virtual void ShowSliceAndImageOn()\n\nEven if there is an image actor, should `slice' and `image' be\ndisplayed?\n"},
  {"ShowSliceAndImageOff", PyvtkCornerAnnotation_ShowSliceAndImageOff, METH_VARARGS,
   "ShowSliceAndImageOff(self) -> None\nC++: virtual void ShowSliceAndImageOff()\n\n"},
  {"SetShowSliceAndImage", PyvtkCornerAnnotation_SetShowSliceAndImage, METH_VARARGS,
   "SetShowSliceAndImage(self, _arg:int) -> None\nC++: virtual void SetShowSliceAndImage(vtkTypeBool _arg)\n\n"},
  {"GetShowSliceAndImage", PyvtkCornerAnnotation_GetShowSliceAndImage, METH_VARARGS,
   "GetShowSliceAndImage(self) -> int\nC++: virtual vtkTypeBool GetShowSliceAndImage()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCornerAnnotation_Doc =
  "vtkCornerAnnotation - text annotation in four corners\n\n"
  "Superclass: vtkActor2D\n\n"
  "This is an annotation object that manages four text actors / mappers\n"
  "to provide annotation in the four corners of a viewport\n\n"
  "@par Special input text::\n"
  "- \\<image>: will be replaced with slice number (relative number)\n"
  "- \\<slice>: will be replaced with slice number (relative number)\n"
  "- \\<image_and_max>: will be replaced with slice number and slice max\n"
  "  (relative)\n"
  "- \\<slice_and_max>: will be replaced with slice number and slice max\n"
  "  (relative)\n"
  "- \\<slice_pos>: will be replaced by the position of the current slice\n"
  "- \\<window>: will be replaced with window value\n"
  "- \\<level>: will be replaced with level value\n"
  "- \\<window_level>: will be replaced with window and level value\n\n"
  "@sa\n"
  "vtkActor2D vtkTextMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCornerAnnotation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkCornerAnnotation", // tp_name
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
  PyvtkCornerAnnotation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCornerAnnotation_StaticNew()
{
  return vtkCornerAnnotation::New();
}

PyObject *PyvtkCornerAnnotation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCornerAnnotation_Type, PyvtkCornerAnnotation_Methods,
    "vtkCornerAnnotation",
 &PyvtkCornerAnnotation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor2D");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCornerAnnotation_TextPosition_Type);
  PyVTKEnum_Add(&PyvtkCornerAnnotation_TextPosition_Type, "vtkCornerAnnotation.TextPosition");

  o = (PyObject *)&PyvtkCornerAnnotation_TextPosition_Type;
  if (PyDict_SetItemString(d, "TextPosition", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkCornerAnnotation::TextPosition cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "LowerLeft", vtkCornerAnnotation::LowerLeft },
        { "LowerRight", vtkCornerAnnotation::LowerRight },
        { "UpperLeft", vtkCornerAnnotation::UpperLeft },
        { "UpperRight", vtkCornerAnnotation::UpperRight },
        { "LowerEdge", vtkCornerAnnotation::LowerEdge },
        { "RightEdge", vtkCornerAnnotation::RightEdge },
        { "LeftEdge", vtkCornerAnnotation::LeftEdge },
        { "UpperEdge", vtkCornerAnnotation::UpperEdge },
      };

    o = PyvtkCornerAnnotation_TextPosition_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyLong_FromLong(8);
  if (o)
  {
    PyDict_SetItemString(d, "NumTextPositions", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCornerAnnotation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCornerAnnotation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCornerAnnotation", o) != 0)
  {
    Py_DECREF(o);
  }

}

