// python wrapper for vtkConvexHull2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkConvexHull2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConvexHull2D(PyObject *dict); }
extern "C" { PyObject *PyvtkConvexHull2D_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConvexHull2D_HullShapes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkConvexHull2D.HullShapes", // tp_name
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
PyObject *PyvtkConvexHull2D_HullShapes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkConvexHull2D_HullShapes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkConvexHull2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConvexHull2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConvexHull2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConvexHull2D *tempr = vtkConvexHull2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConvexHull2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConvexHull2D::NewInstance());

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
PyvtkConvexHull2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkConvexHull2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkConvexHull2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkConvexHull2D::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkConvexHull2D::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkConvexHull2D::GetOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutline(temp0);
    }
    else
    {
      op->vtkConvexHull2D::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkConvexHull2D::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkConvexHull2D::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetHullShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHullShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHullShape() :
      op->vtkConvexHull2D::GetHullShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetHullShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHullShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHullShape(temp0);
    }
    else
    {
      op->vtkConvexHull2D::SetHullShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetHullShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHullShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHullShapeMinValue() :
      op->vtkConvexHull2D::GetHullShapeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetHullShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHullShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHullShapeMaxValue() :
      op->vtkConvexHull2D::GetHullShapeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetMinHullSizeInWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinHullSizeInWorld(temp0);
    }
    else
    {
      op->vtkConvexHull2D::SetMinHullSizeInWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInWorldMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInWorldMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinHullSizeInWorldMinValue() :
      op->vtkConvexHull2D::GetMinHullSizeInWorldMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInWorldMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInWorldMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinHullSizeInWorldMaxValue() :
      op->vtkConvexHull2D::GetMinHullSizeInWorldMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinHullSizeInWorld() :
      op->vtkConvexHull2D::GetMinHullSizeInWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetMinHullSizeInDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinHullSizeInDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinHullSizeInDisplay(temp0);
    }
    else
    {
      op->vtkConvexHull2D::SetMinHullSizeInDisplay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInDisplayMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInDisplayMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinHullSizeInDisplayMinValue() :
      op->vtkConvexHull2D::GetMinHullSizeInDisplayMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInDisplayMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInDisplayMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinHullSizeInDisplayMaxValue() :
      op->vtkConvexHull2D::GetMinHullSizeInDisplayMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMinHullSizeInDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinHullSizeInDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinHullSizeInDisplay() :
      op->vtkConvexHull2D::GetMinHullSizeInDisplay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

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
      op->vtkConvexHull2D::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkConvexHull2D::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexHull2D *op = static_cast<vtkConvexHull2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkConvexHull2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_CalculateBoundingRectangle(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CalculateBoundingRectangle");

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  double temp2 = 1.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkConvexHull2D::CalculateBoundingRectangle(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexHull2D_CalculateConvexHull(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CalculateConvexHull");

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  double temp2 = 1.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkConvexHull2D::CalculateConvexHull(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkConvexHull2D_Methods[] = {
  {"IsTypeOf", PyvtkConvexHull2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConvexHull2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConvexHull2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkConvexHull2D\nC++: static vtkConvexHull2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConvexHull2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkConvexHull2D\nC++: vtkConvexHull2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkConvexHull2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkConvexHull2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetScaleFactor", PyvtkConvexHull2D_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\nScale the hull by the amount specified. Defaults to 1.0.\n"},
  {"SetScaleFactor", PyvtkConvexHull2D_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\n"},
  {"GetOutline", PyvtkConvexHull2D_GetOutline, METH_VARARGS,
   "GetOutline(self) -> bool\nC++: virtual bool GetOutline()\n\nProduce an outline (polyline) of the hull on output port 1.\n"},
  {"SetOutline", PyvtkConvexHull2D_SetOutline, METH_VARARGS,
   "SetOutline(self, _arg:bool) -> None\nC++: virtual void SetOutline(bool _arg)\n\n"},
  {"OutlineOn", PyvtkConvexHull2D_OutlineOn, METH_VARARGS,
   "OutlineOn(self) -> None\nC++: virtual void OutlineOn()\n\n"},
  {"OutlineOff", PyvtkConvexHull2D_OutlineOff, METH_VARARGS,
   "OutlineOff(self) -> None\nC++: virtual void OutlineOff()\n\n"},
  {"GetHullShape", PyvtkConvexHull2D_GetHullShape, METH_VARARGS,
   "GetHullShape(self) -> int\nC++: virtual int GetHullShape()\n\nSet the shape of the hull to BoundingRectangle or ConvexHull.\n"},
  {"SetHullShape", PyvtkConvexHull2D_SetHullShape, METH_VARARGS,
   "SetHullShape(self, _arg:int) -> None\nC++: virtual void SetHullShape(int _arg)\n\n"},
  {"GetHullShapeMinValue", PyvtkConvexHull2D_GetHullShapeMinValue, METH_VARARGS,
   "GetHullShapeMinValue(self) -> int\nC++: virtual int GetHullShapeMinValue()\n\n"},
  {"GetHullShapeMaxValue", PyvtkConvexHull2D_GetHullShapeMaxValue, METH_VARARGS,
   "GetHullShapeMaxValue(self) -> int\nC++: virtual int GetHullShapeMaxValue()\n\n"},
  {"SetMinHullSizeInWorld", PyvtkConvexHull2D_SetMinHullSizeInWorld, METH_VARARGS,
   "SetMinHullSizeInWorld(self, _arg:float) -> None\nC++: virtual void SetMinHullSizeInWorld(double _arg)\n\nSet the minimum x,y-dimensions of each hull in world coordinates.\nDefaults to 1.0. Set to 0.0 to disable.\n"},
  {"GetMinHullSizeInWorldMinValue", PyvtkConvexHull2D_GetMinHullSizeInWorldMinValue, METH_VARARGS,
   "GetMinHullSizeInWorldMinValue(self) -> float\nC++: virtual double GetMinHullSizeInWorldMinValue()\n\n"},
  {"GetMinHullSizeInWorldMaxValue", PyvtkConvexHull2D_GetMinHullSizeInWorldMaxValue, METH_VARARGS,
   "GetMinHullSizeInWorldMaxValue(self) -> float\nC++: virtual double GetMinHullSizeInWorldMaxValue()\n\n"},
  {"GetMinHullSizeInWorld", PyvtkConvexHull2D_GetMinHullSizeInWorld, METH_VARARGS,
   "GetMinHullSizeInWorld(self) -> float\nC++: virtual double GetMinHullSizeInWorld()\n\n"},
  {"SetMinHullSizeInDisplay", PyvtkConvexHull2D_SetMinHullSizeInDisplay, METH_VARARGS,
   "SetMinHullSizeInDisplay(self, _arg:int) -> None\nC++: virtual void SetMinHullSizeInDisplay(int _arg)\n\nSet the minimum x,y-dimensions of each hull in pixels. You must\nalso set a vtkRenderer. Defaults to 1. Set to 0 to disable.\n"},
  {"GetMinHullSizeInDisplayMinValue", PyvtkConvexHull2D_GetMinHullSizeInDisplayMinValue, METH_VARARGS,
   "GetMinHullSizeInDisplayMinValue(self) -> int\nC++: virtual int GetMinHullSizeInDisplayMinValue()\n\n"},
  {"GetMinHullSizeInDisplayMaxValue", PyvtkConvexHull2D_GetMinHullSizeInDisplayMaxValue, METH_VARARGS,
   "GetMinHullSizeInDisplayMaxValue(self) -> int\nC++: virtual int GetMinHullSizeInDisplayMaxValue()\n\n"},
  {"GetMinHullSizeInDisplay", PyvtkConvexHull2D_GetMinHullSizeInDisplay, METH_VARARGS,
   "GetMinHullSizeInDisplay(self) -> int\nC++: virtual int GetMinHullSizeInDisplay()\n\n"},
  {"SetRenderer", PyvtkConvexHull2D_SetRenderer, METH_VARARGS,
   "SetRenderer(self, renderer:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *renderer)\n\nRenderer needed for MinHullSizeInDisplay calculation. Not\nreference counted.\n"},
  {"GetRenderer", PyvtkConvexHull2D_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\n"},
  {"GetMTime", PyvtkConvexHull2D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time of this filter.\n"},
  {"CalculateBoundingRectangle", PyvtkConvexHull2D_CalculateBoundingRectangle, METH_VARARGS,
   "CalculateBoundingRectangle(inPoints:vtkPoints,\n    outPoints:vtkPoints, minimumHullSize:float=1.0) -> None\nC++: static void CalculateBoundingRectangle(vtkPoints *inPoints,\n    vtkPoints *outPoints, double minimumHullSize=1.0)\n\nConvenience methods to calculate a convex hull from a set of\nvtkPointS.\n"},
  {"CalculateConvexHull", PyvtkConvexHull2D_CalculateConvexHull, METH_VARARGS,
   "CalculateConvexHull(inPoints:vtkPoints, outPoints:vtkPoints,\n    minimumHullSize:float=1.0) -> None\nC++: static void CalculateConvexHull(vtkPoints *inPoints,\n    vtkPoints *outPoints, double minimumHullSize=1.0)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkConvexHull2D_Doc =
  "vtkConvexHull2D - Produce filled convex hulls around a set of points.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "Produces a vtkPolyData comprised of a filled polygon of the convex\n"
  "hull of the input points. You may alternatively choose to output a\n"
  "bounding rectangle. Static methods are provided that calculate a\n"
  "(counter-clockwise) hull based on a set of input points.\n\n"
  "To help maintain the property of guaranteed visibilityhulls may be\n"
  "artificially scaled by setting MinHullSizeInWorld. This is\n"
  "particularly helpful in the case that there are only one or two\n"
  "points as it avoids producing a degenerate polygon. This setting is\n"
  "also available as an argument to the static methods.\n\n"
  "Setting a vtkRenderer on the filter enables the possibility to set\n"
  "MinHullSizeInDisplay to the desired number of display pixels to cover\n"
  "in each of the x- and y-dimensions.\n\n"
  "Setting OutlineOn() additionally produces an outline of the hull on\n"
  "output port 1.\n\n"
  "@attention This filter operates in the x,y-plane and as such works\n"
  "best with an interactor style that does not permit camera rotation\n"
  "such as vtkInteractorStyleRubberBand2D.\n\n"
  "@par Thanks: Thanks to Colin Myers, University of Leeds for providing\n"
  "this implementation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConvexHull2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkConvexHull2D", // tp_name
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
  PyvtkConvexHull2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConvexHull2D_StaticNew()
{
  return vtkConvexHull2D::New();
}

PyObject *PyvtkConvexHull2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkConvexHull2D_Type, PyvtkConvexHull2D_Methods,
    "vtkConvexHull2D",
 &PyvtkConvexHull2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkConvexHull2D_HullShapes_Type);
  PyVTKEnum_Add(&PyvtkConvexHull2D_HullShapes_Type, "vtkConvexHull2D.HullShapes");

  o = (PyObject *)&PyvtkConvexHull2D_HullShapes_Type;
  if (PyDict_SetItemString(d, "HullShapes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkConvexHull2D::HullShapes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "BoundingRectangle", vtkConvexHull2D::BoundingRectangle },
        { "ConvexHull", vtkConvexHull2D::ConvexHull },
      };

    o = PyvtkConvexHull2D_HullShapes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConvexHull2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConvexHull2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConvexHull2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

