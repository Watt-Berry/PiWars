// python wrapper for vtkHandleWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHandleWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHandleWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkHandleWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHandleWidget_WidgetStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkHandleWidget.WidgetStateType", // tp_name
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
PyObject *PyvtkHandleWidget_WidgetStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHandleWidget_WidgetStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkHandleWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHandleWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHandleWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHandleWidget *tempr = vtkHandleWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHandleWidget::NewInstance());

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
PyvtkHandleWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHandleWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHandleWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  vtkHandleRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkHandleWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetHandleRepresentation() :
      op->vtkHandleWidget::GetHandleRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkHandleWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetEnableAxisConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAxisConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableAxisConstraint(temp0);
    }
    else
    {
      op->vtkHandleWidget::SetEnableAxisConstraint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetEnableAxisConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAxisConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableAxisConstraint() :
      op->vtkHandleWidget::GetEnableAxisConstraint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableAxisConstraintOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAxisConstraintOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAxisConstraintOn();
    }
    else
    {
      op->vtkHandleWidget::EnableAxisConstraintOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableAxisConstraintOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAxisConstraintOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAxisConstraintOff();
    }
    else
    {
      op->vtkHandleWidget::EnableAxisConstraintOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetEnableTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableTranslation(temp0);
    }
    else
    {
      op->vtkHandleWidget::SetEnableTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetEnableTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableTranslation() :
      op->vtkHandleWidget::GetEnableTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableTranslationOn();
    }
    else
    {
      op->vtkHandleWidget::EnableTranslationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableTranslationOff();
    }
    else
    {
      op->vtkHandleWidget::EnableTranslationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetAllowHandleResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowHandleResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowHandleResize(temp0);
    }
    else
    {
      op->vtkHandleWidget::SetAllowHandleResize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetAllowHandleResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowHandleResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowHandleResize() :
      op->vtkHandleWidget::GetAllowHandleResize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_AllowHandleResizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowHandleResizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowHandleResizeOn();
    }
    else
    {
      op->vtkHandleWidget::AllowHandleResizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_AllowHandleResizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowHandleResizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowHandleResizeOff();
    }
    else
    {
      op->vtkHandleWidget::AllowHandleResizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkHandleWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetShowInactive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowInactive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowInactive(temp0);
    }
    else
    {
      op->vtkHandleWidget::SetShowInactive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetShowInactive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowInactive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowInactive() :
      op->vtkHandleWidget::GetShowInactive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_ShowInactiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowInactiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowInactiveOn();
    }
    else
    {
      op->vtkHandleWidget::ShowInactiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_ShowInactiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowInactiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowInactiveOff();
    }
    else
    {
      op->vtkHandleWidget::ShowInactiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

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
      op->vtkHandleWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHandleWidget_Methods[] = {
  {"IsTypeOf", PyvtkHandleWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHandleWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHandleWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHandleWidget\nC++: static vtkHandleWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHandleWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHandleWidget\nC++: vtkHandleWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHandleWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHandleWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkHandleWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkHandleRepresentation) -> None\nC++: void SetRepresentation(vtkHandleRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetHandleRepresentation", PyvtkHandleWidget_GetHandleRepresentation, METH_VARARGS,
   "GetHandleRepresentation(self) -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation()\n\nReturn the representation as a vtkHandleRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkHandleWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set. By\ndefault an instance of vtkPointHandleRepresentation3D is created.\n"},
  {"SetEnableAxisConstraint", PyvtkHandleWidget_SetEnableAxisConstraint, METH_VARARGS,
   "SetEnableAxisConstraint(self, _arg:int) -> None\nC++: virtual void SetEnableAxisConstraint(vtkTypeBool _arg)\n\nEnable / disable axis constrained motion of the handles. By\ndefault the widget responds to the shift modifier to constrain\nthe handle along the axis closest aligned with the motion vector.\n"},
  {"GetEnableAxisConstraint", PyvtkHandleWidget_GetEnableAxisConstraint, METH_VARARGS,
   "GetEnableAxisConstraint(self) -> int\nC++: virtual vtkTypeBool GetEnableAxisConstraint()\n\n"},
  {"EnableAxisConstraintOn", PyvtkHandleWidget_EnableAxisConstraintOn, METH_VARARGS,
   "EnableAxisConstraintOn(self) -> None\nC++: virtual void EnableAxisConstraintOn()\n\n"},
  {"EnableAxisConstraintOff", PyvtkHandleWidget_EnableAxisConstraintOff, METH_VARARGS,
   "EnableAxisConstraintOff(self) -> None\nC++: virtual void EnableAxisConstraintOff()\n\n"},
  {"SetEnableTranslation", PyvtkHandleWidget_SetEnableTranslation, METH_VARARGS,
   "SetEnableTranslation(self, _arg:int) -> None\nC++: virtual void SetEnableTranslation(vtkTypeBool _arg)\n\nEnable moving of handles. By default, the handle can be moved.\n"},
  {"GetEnableTranslation", PyvtkHandleWidget_GetEnableTranslation, METH_VARARGS,
   "GetEnableTranslation(self) -> int\nC++: virtual vtkTypeBool GetEnableTranslation()\n\n"},
  {"EnableTranslationOn", PyvtkHandleWidget_EnableTranslationOn, METH_VARARGS,
   "EnableTranslationOn(self) -> None\nC++: virtual void EnableTranslationOn()\n\n"},
  {"EnableTranslationOff", PyvtkHandleWidget_EnableTranslationOff, METH_VARARGS,
   "EnableTranslationOff(self) -> None\nC++: virtual void EnableTranslationOff()\n\n"},
  {"SetAllowHandleResize", PyvtkHandleWidget_SetAllowHandleResize, METH_VARARGS,
   "SetAllowHandleResize(self, _arg:int) -> None\nC++: virtual void SetAllowHandleResize(vtkTypeBool _arg)\n\nAllow resizing of handles ? By default the right mouse button\nscales the handle size.\n"},
  {"GetAllowHandleResize", PyvtkHandleWidget_GetAllowHandleResize, METH_VARARGS,
   "GetAllowHandleResize(self) -> int\nC++: virtual vtkTypeBool GetAllowHandleResize()\n\n"},
  {"AllowHandleResizeOn", PyvtkHandleWidget_AllowHandleResizeOn, METH_VARARGS,
   "AllowHandleResizeOn(self) -> None\nC++: virtual void AllowHandleResizeOn()\n\n"},
  {"AllowHandleResizeOff", PyvtkHandleWidget_AllowHandleResizeOff, METH_VARARGS,
   "AllowHandleResizeOff(self) -> None\nC++: virtual void AllowHandleResizeOff()\n\n"},
  {"GetWidgetState", PyvtkHandleWidget_GetWidgetState, METH_VARARGS,
   "GetWidgetState(self) -> int\nC++: virtual int GetWidgetState()\n\nGet the widget state.\n"},
  {"SetShowInactive", PyvtkHandleWidget_SetShowInactive, METH_VARARGS,
   "SetShowInactive(self, _arg:int) -> None\nC++: virtual void SetShowInactive(vtkTypeBool _arg)\n\nAllow the widget to be visible as an inactive representation when\ndisabled. By default, this is false i.e. the representation is\nnot visible when the widget is disabled.\n"},
  {"GetShowInactive", PyvtkHandleWidget_GetShowInactive, METH_VARARGS,
   "GetShowInactive(self) -> int\nC++: virtual vtkTypeBool GetShowInactive()\n\n"},
  {"ShowInactiveOn", PyvtkHandleWidget_ShowInactiveOn, METH_VARARGS,
   "ShowInactiveOn(self) -> None\nC++: virtual void ShowInactiveOn()\n\n"},
  {"ShowInactiveOff", PyvtkHandleWidget_ShowInactiveOff, METH_VARARGS,
   "ShowInactiveOff(self) -> None\nC++: virtual void ShowInactiveOff()\n\n"},
  {"SetEnabled", PyvtkHandleWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabling:int) -> None\nC++: void SetEnabled(int enabling) override;\n\nEnable/disable widget. Custom override for the SetEnabled method\nto allow for the inactive state.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHandleWidget_Doc =
  "vtkHandleWidget - a general widget for moving handles\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkHandleWidget is used to position a handle.  A handle is a\n"
  "widget with a position (in display and world space). Various\n"
  "appearances are available depending on its associated representation.\n"
  "The widget provides methods for translation, including constrained\n"
  "translation along coordinate axes. To use this widget, create and\n"
  "associate a representation with the widget.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  LeftButtonPressEvent - select focal point of widget\n"
  "  LeftButtonReleaseEvent - end selection\n"
  "  MiddleButtonPressEvent - translate widget\n"
  "  MiddleButtonReleaseEvent - end translation\n"
  "  RightButtonPressEvent - scale widget\n"
  "  RightButtonReleaseEvent - end scaling\n"
  "  MouseMoveEvent - interactive movement across widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkHandleWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- focal point is being selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Translate -- translate the widget\n"
  "  vtkWidgetEvent::EndTranslate -- end widget translation\n"
  "  vtkWidgetEvent::Scale -- scale the widget\n"
  "  vtkWidgetEvent::EndScale -- end scaling the widget\n"
  "  vtkWidgetEvent::Move -- a request for widget motion \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkHandleWidget invokes the following VTK events on itself (which\n"
  "observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHandleWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkHandleWidget", // tp_name
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
  PyvtkHandleWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHandleWidget_StaticNew()
{
  return vtkHandleWidget::New();
}

PyObject *PyvtkHandleWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHandleWidget_Type, PyvtkHandleWidget_Methods,
    "vtkHandleWidget",
 &PyvtkHandleWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHandleWidget_WidgetStateType_Type);
  PyVTKEnum_Add(&PyvtkHandleWidget_WidgetStateType_Type, "vtkHandleWidget.WidgetStateType");

  o = (PyObject *)&PyvtkHandleWidget_WidgetStateType_Type;
  if (PyDict_SetItemString(d, "WidgetStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkHandleWidget::WidgetStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "Start", vtkHandleWidget::Start },
        { "Active", vtkHandleWidget::Active },
        { "Inactive", vtkHandleWidget::Inactive },
      };

    o = PyvtkHandleWidget_WidgetStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHandleWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHandleWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHandleWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

