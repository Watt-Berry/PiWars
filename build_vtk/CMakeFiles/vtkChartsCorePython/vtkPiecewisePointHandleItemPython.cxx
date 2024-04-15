// python wrapper for vtkPiecewisePointHandleItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWeakPointer.h"
#include "vtkPiecewisePointHandleItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPiecewisePointHandleItem(PyObject *dict); }
extern "C" { PyObject *PyvtkPiecewisePointHandleItem_ClassNew(); }


static PyObject *
PyvtkPiecewisePointHandleItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPiecewisePointHandleItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewisePointHandleItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPiecewisePointHandleItem *tempr = vtkPiecewisePointHandleItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewisePointHandleItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewisePointHandleItem::NewInstance());

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
PyvtkPiecewisePointHandleItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPiecewisePointHandleItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPiecewisePointHandleItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_CallRedraw(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CallRedraw");

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    vtkPiecewisePointHandleItem::CallRedraw(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkAbstractContextItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
  {
    if (ap.IsBound())
    {
      op->SetParent(temp0);
    }
    else
    {
      op->vtkPiecewisePointHandleItem::SetParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPiecewisePointHandleItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SetCurrentPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentPointIndex(temp0);
    }
    else
    {
      op->vtkPiecewisePointHandleItem::SetCurrentPointIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_GetCurrentPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCurrentPointIndex() :
      op->vtkPiecewisePointHandleItem::GetCurrentPointIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_SetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetPiecewiseFunction(temp0);
    }
    else
    {
      op->vtkPiecewisePointHandleItem::SetPiecewiseFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_GetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWeakPointer<vtkPiecewiseFunction> tempr = (ap.IsBound() ?
      op->GetPiecewiseFunction() :
      op->vtkPiecewisePointHandleItem::GetPiecewiseFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkWeakPointer_I20vtkPiecewiseFunctionE");
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_IsOverHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOverHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IsOverHandle(temp0) :
      op->vtkPiecewisePointHandleItem::IsOverHandle(temp0));

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
PyvtkPiecewisePointHandleItem_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkPiecewisePointHandleItem::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkPiecewisePointHandleItem::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkPiecewisePointHandleItem::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPiecewisePointHandleItem_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewisePointHandleItem *op = static_cast<vtkPiecewisePointHandleItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkPiecewisePointHandleItem::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPiecewisePointHandleItem_Methods[] = {
  {"IsTypeOf", PyvtkPiecewisePointHandleItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPiecewisePointHandleItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPiecewisePointHandleItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPiecewisePointHandleItem\nC++: static vtkPiecewisePointHandleItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPiecewisePointHandleItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPiecewisePointHandleItem\nC++: vtkPiecewisePointHandleItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPiecewisePointHandleItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPiecewisePointHandleItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CallRedraw", PyvtkPiecewisePointHandleItem_CallRedraw, METH_VARARGS,
   "CallRedraw(sender:vtkObject, event:int, receiver:Pointer,\n    params:Pointer) -> None\nC++: static void CallRedraw(vtkObject *sender,\n    unsigned long event, void *receiver, void *params)\n\n"},
  {"SetParent", PyvtkPiecewisePointHandleItem_SetParent, METH_VARARGS,
   "SetParent(self, parent:vtkAbstractContextItem) -> None\nC++: void SetParent(vtkAbstractContextItem *parent) override;\n\nSet the parent item, which should be a vtkControlPointItem\n"},
  {"Paint", PyvtkPiecewisePointHandleItem_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the item.\n"},
  {"SetCurrentPointIndex", PyvtkPiecewisePointHandleItem_SetCurrentPointIndex, METH_VARARGS,
   "SetCurrentPointIndex(self, _arg:int) -> None\nC++: virtual void SetCurrentPointIndex(vtkIdType _arg)\n\nThe current point id in the piecewise function being handled.\n"},
  {"GetCurrentPointIndex", PyvtkPiecewisePointHandleItem_GetCurrentPointIndex, METH_VARARGS,
   "GetCurrentPointIndex(self) -> int\nC++: virtual vtkIdType GetCurrentPointIndex()\n\n"},
  {"SetPiecewiseFunction", PyvtkPiecewisePointHandleItem_SetPiecewiseFunction, METH_VARARGS,
   "SetPiecewiseFunction(self, piecewiseFunc:vtkPiecewiseFunction)\n    -> None\nC++: virtual void SetPiecewiseFunction(\n    vtkPiecewiseFunction *piecewiseFunc)\n\nSet the PieceWiseFunction the handles will manipulate\n"},
  {"GetPiecewiseFunction", PyvtkPiecewisePointHandleItem_GetPiecewiseFunction, METH_VARARGS,
   "GetPiecewiseFunction(self)\n    -> vtkWeakPointer_I20vtkPiecewiseFunctionE\nC++: vtkWeakPointer<vtkPiecewiseFunction> GetPiecewiseFunction()\n\n"},
  {"IsOverHandle", PyvtkPiecewisePointHandleItem_IsOverHandle, METH_VARARGS,
   "IsOverHandle(self, pos:[float, ...]) -> int\nC++: int IsOverHandle(float *pos)\n\nReturns the index of the handle if pos is over any of the\nhandles, otherwise return -1;\n"},
  {"Hit", PyvtkPiecewisePointHandleItem_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseMoveEvent", PyvtkPiecewisePointHandleItem_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseButtonPressEvent", PyvtkPiecewisePointHandleItem_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event.\n"},
  {"MouseButtonReleaseEvent", PyvtkPiecewisePointHandleItem_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPiecewisePointHandleItem_Doc =
  "vtkPiecewisePointHandleItem - a vtkContextItem that draws handles\n      around a point of a piecewise function\n\n"
  "Superclass: vtkContextItem\n\n"
  "This is a vtkContextItem that can be placed into a vtkContextScene.\n"
  "It draws handles around a given point of a piecewise function so that\n"
  "the curve can be adjusted using these handles.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPiecewisePointHandleItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPiecewisePointHandleItem", // tp_name
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
  PyvtkPiecewisePointHandleItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPiecewisePointHandleItem_StaticNew()
{
  return vtkPiecewisePointHandleItem::New();
}

PyObject *PyvtkPiecewisePointHandleItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPiecewisePointHandleItem_Type, PyvtkPiecewisePointHandleItem_Methods,
    "vtkPiecewisePointHandleItem",
 &PyvtkPiecewisePointHandleItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPiecewisePointHandleItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPiecewisePointHandleItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPiecewisePointHandleItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

