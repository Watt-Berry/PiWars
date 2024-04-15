// python wrapper for vtkCompositeControlPointsItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCompositeControlPointsItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeControlPointsItem(PyObject *dict); }
extern "C" { PyObject *PyvtkCompositeControlPointsItem_ClassNew(); }

#ifndef DECLARED_PyvtkColorTransferControlPointsItem_ClassNew
extern "C" { PyObject *PyvtkColorTransferControlPointsItem_ClassNew(); }
#define DECLARED_PyvtkColorTransferControlPointsItem_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositeControlPointsItem_PointsFunctionType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkCompositeControlPointsItem.PointsFunctionType", // tp_name
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
PyObject *PyvtkCompositeControlPointsItem_PointsFunctionType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCompositeControlPointsItem_PointsFunctionType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCompositeControlPointsItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeControlPointsItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeControlPointsItem *tempr = vtkCompositeControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeControlPointsItem::NewInstance());

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
PyvtkCompositeControlPointsItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompositeControlPointsItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompositeControlPointsItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColorTransferFunction(temp0);
    }
    else
    {
      op->vtkCompositeControlPointsItem::SetColorTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetOpacityFunction(temp0);
    }
    else
    {
      op->vtkCompositeControlPointsItem::SetOpacityFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetOpacityFunction() :
      op->vtkCompositeControlPointsItem::GetOpacityFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetPointsFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointsFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointsFunction(temp0);
    }
    else
    {
      op->vtkCompositeControlPointsItem::SetPointsFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetPointsFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointsFunction() :
      op->vtkCompositeControlPointsItem::GetPointsFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->AddPoint(temp0) :
      op->vtkCompositeControlPointsItem::AddPoint(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_RemovePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkCompositeControlPointsItem::RemovePoint(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeControlPointsItem_RemovePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkCompositeControlPointsItem::RemovePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeControlPointsItem_RemovePoint_Methods[] = {
  {"RemovePoint", PyvtkCompositeControlPointsItem_RemovePoint_s1, METH_VARARGS,
   "@P *d"},
  {"RemovePoint", PyvtkCompositeControlPointsItem_RemovePoint_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositeControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeControlPointsItem_RemovePoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemovePoint");
  return nullptr;
}


static PyObject *
PyvtkCompositeControlPointsItem_SetUseOpacityPointHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOpacityPointHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOpacityPointHandles(temp0);
    }
    else
    {
      op->vtkCompositeControlPointsItem::SetUseOpacityPointHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetUseOpacityPointHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOpacityPointHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseOpacityPointHandles() :
      op->vtkCompositeControlPointsItem::GetUseOpacityPointHandles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkCompositeControlPointsItem::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_MouseDoubleClickEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseDoubleClickEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseDoubleClickEvent(*temp0) :
      op->vtkCompositeControlPointsItem::MouseDoubleClickEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkCompositeControlPointsItem::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkCompositeControlPointsItem::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeControlPointsItem_GetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  long long temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetControlPoint(temp0, temp1);
    }
    else
    {
      op->vtkCompositeControlPointsItem::GetControlPoint(temp0, temp1);
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
PyvtkCompositeControlPointsItem_SetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeControlPointsItem *op = static_cast<vtkCompositeControlPointsItem *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetControlPoint(temp0, temp1);
    }
    else
    {
      op->vtkCompositeControlPointsItem::SetControlPoint(temp0, temp1);
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

static PyMethodDef PyvtkCompositeControlPointsItem_Methods[] = {
  {"IsTypeOf", PyvtkCompositeControlPointsItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeControlPointsItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeControlPointsItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCompositeControlPointsItem\nC++: static vtkCompositeControlPointsItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeControlPointsItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompositeControlPointsItem\nC++: vtkCompositeControlPointsItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompositeControlPointsItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompositeControlPointsItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetColorTransferFunction", PyvtkCompositeControlPointsItem_SetColorTransferFunction, METH_VARARGS,
   "SetColorTransferFunction(self, function:vtkColorTransferFunction)\n    -> None\nC++: virtual void SetColorTransferFunction(\n    vtkColorTransferFunction *function)\n\nSet the color transfer function to draw its points\n"},
  {"SetOpacityFunction", PyvtkCompositeControlPointsItem_SetOpacityFunction, METH_VARARGS,
   "SetOpacityFunction(self, opacity:vtkPiecewiseFunction) -> None\nC++: void SetOpacityFunction(vtkPiecewiseFunction *opacity)\n\nUtility function that calls SetPiecewiseFunction()\n"},
  {"GetOpacityFunction", PyvtkCompositeControlPointsItem_GetOpacityFunction, METH_VARARGS,
   "GetOpacityFunction(self) -> vtkPiecewiseFunction\nC++: virtual vtkPiecewiseFunction *GetOpacityFunction()\n\n"},
  {"SetPointsFunction", PyvtkCompositeControlPointsItem_SetPointsFunction, METH_VARARGS,
   "SetPointsFunction(self, _arg:int) -> None\nC++: virtual void SetPointsFunction(int _arg)\n\nPointsFunction controls whether the points represent the\nColorTransferFunction, OpacityTransferFunction or both. If\nColorPointsFunction, only the points of the ColorTransfer\nfunction are used. If OpacityPointsFunction, only the points of\nthe Opacity function are used If ColorAndOpacityPointsFunction,\nthe points of both functions are shared by both functions.\nColorAndOpacityPointsFunction by default. Note: Set the mode\nbefore the functions are set. ColorPointsFunction is not fully\nsupported.\n"},
  {"GetPointsFunction", PyvtkCompositeControlPointsItem_GetPointsFunction, METH_VARARGS,
   "GetPointsFunction(self) -> int\nC++: virtual int GetPointsFunction()\n\n"},
  {"AddPoint", PyvtkCompositeControlPointsItem_AddPoint, METH_VARARGS,
   "AddPoint(self, newPos:[float, ...]) -> int\nC++: vtkIdType AddPoint(double *newPos) override;\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"RemovePoint", PyvtkCompositeControlPointsItem_RemovePoint, METH_VARARGS,
   "RemovePoint(self, pos:[float, ...]) -> int\nC++: vtkIdType RemovePoint(double *pos) override;\nRemovePoint(self, pointId:int) -> int\nC++: vtkIdType RemovePoint(vtkIdType pointId)\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"SetUseOpacityPointHandles", PyvtkCompositeControlPointsItem_SetUseOpacityPointHandles, METH_VARARGS,
   "SetUseOpacityPointHandles(self, _arg:bool) -> None\nC++: virtual void SetUseOpacityPointHandles(bool _arg)\n\nIf UseOpacityPointHandles is true, when the current point is\ndouble clicked, a vtkPiecewisePointHandleItem will show up so\nthat the sharpness and mid point can be adjusted in the scene\nwith those handles False by default.\n"},
  {"GetUseOpacityPointHandles", PyvtkCompositeControlPointsItem_GetUseOpacityPointHandles, METH_VARARGS,
   "GetUseOpacityPointHandles(self) -> bool\nC++: virtual bool GetUseOpacityPointHandles()\n\n"},
  {"MouseMoveEvent", PyvtkCompositeControlPointsItem_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event. To take care of some special Key stroke\n"},
  {"MouseDoubleClickEvent", PyvtkCompositeControlPointsItem_MouseDoubleClickEvent, METH_VARARGS,
   "MouseDoubleClickEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseDoubleClickEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button double click event. Return true if the item holds\nthe event, false if the event can be propagated to other items.\n"},
  {"MouseButtonPressEvent", PyvtkCompositeControlPointsItem_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse and key events.\n"},
  {"GetNumberOfPoints", PyvtkCompositeControlPointsItem_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nReturns the total number of points, either from using the\nsuperclass implementation or the opacity function when available\n"},
  {"GetControlPoint", PyvtkCompositeControlPointsItem_GetControlPoint, METH_VARARGS,
   "GetControlPoint(self, index:int, point:[float, float, float,\n    float]) -> None\nC++: void GetControlPoint(vtkIdType index, double point[4])\n    override;\n\nReturns the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index. point\nmust be a double array of size 4. The values will be recovered\nfrom the opacity function when available.\n"},
  {"SetControlPoint", PyvtkCompositeControlPointsItem_SetControlPoint, METH_VARARGS,
   "SetControlPoint(self, index:int, point:[float, ...]) -> None\nC++: void SetControlPoint(vtkIdType index, double *point)\n    override;\n\nSets the x and y coordinates as well as the midpoint and\nsharpness, of the control point corresponding to the index,\neither using the superclass implementation or the opacity\nfunction when available. The provided point should be a double\narray of size 4.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCompositeControlPointsItem_Doc =
  "vtkCompositeControlPointsItem - Control points for\nvtkCompositeFunction.\n\n"
  "Superclass: vtkColorTransferControlPointsItem\n\n"
  "vtkCompositeControlPointsItem draws the control points of a\n"
  "vtkPiecewiseFunction and a vtkColorTransferFunction.\n"
  "@sa\n"
  "vtkControlPointsItem vtkColorTransferControlPointsItem\n"
  "vtkCompositeTransferFunctionItem vtkPiecewisePointHandleItem\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositeControlPointsItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkCompositeControlPointsItem", // tp_name
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
  PyvtkCompositeControlPointsItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeControlPointsItem_StaticNew()
{
  return vtkCompositeControlPointsItem::New();
}

PyObject *PyvtkCompositeControlPointsItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompositeControlPointsItem_Type, PyvtkCompositeControlPointsItem_Methods,
    "vtkCompositeControlPointsItem",
 &PyvtkCompositeControlPointsItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkColorTransferControlPointsItem_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCompositeControlPointsItem_PointsFunctionType_Type);
  PyVTKEnum_Add(&PyvtkCompositeControlPointsItem_PointsFunctionType_Type, "vtkCompositeControlPointsItem.PointsFunctionType");

  o = (PyObject *)&PyvtkCompositeControlPointsItem_PointsFunctionType_Type;
  if (PyDict_SetItemString(d, "PointsFunctionType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCompositeControlPointsItem::PointsFunctionType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ColorPointsFunction", vtkCompositeControlPointsItem::ColorPointsFunction },
        { "OpacityPointsFunction", vtkCompositeControlPointsItem::OpacityPointsFunction },
        { "ColorAndOpacityPointsFunction", vtkCompositeControlPointsItem::ColorAndOpacityPointsFunction },
      };

    o = PyvtkCompositeControlPointsItem_PointsFunctionType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeControlPointsItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeControlPointsItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeControlPointsItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

