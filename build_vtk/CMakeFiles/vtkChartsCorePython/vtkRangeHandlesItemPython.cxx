// python wrapper for vtkRangeHandlesItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRangeHandlesItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRangeHandlesItem(PyObject *dict); }
extern "C" { PyObject *PyvtkRangeHandlesItem_ClassNew(); }

#ifndef DECLARED_PyvtkPlotRangeHandlesItem_ClassNew
extern "C" { PyObject *PyvtkPlotRangeHandlesItem_ClassNew(); }
#define DECLARED_PyvtkPlotRangeHandlesItem_ClassNew
#endif

static PyObject *
PyvtkRangeHandlesItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRangeHandlesItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRangeHandlesItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRangeHandlesItem *tempr = vtkRangeHandlesItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRangeHandlesItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRangeHandlesItem::NewInstance());

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
PyvtkRangeHandlesItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRangeHandlesItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRangeHandlesItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkRangeHandlesItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkRangeHandlesItem::GetBounds(temp0);
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
PyvtkRangeHandlesItem_GetHandlesRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlesRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

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
      op->GetHandlesRange(temp0);
    }
    else
    {
      op->vtkRangeHandlesItem::GetHandlesRange(temp0);
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
PyvtkRangeHandlesItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

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
      op->vtkRangeHandlesItem::SetColorTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetColorTransferFunction() :
      op->vtkRangeHandlesItem::GetColorTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_ComputeHandlesDrawRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeHandlesDrawRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeHandlesDrawRange();
    }
    else
    {
      op->vtkRangeHandlesItem::ComputeHandlesDrawRange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_SynchronizeRangeHandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeRangeHandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronizeRangeHandlesOn();
    }
    else
    {
      op->vtkRangeHandlesItem::SynchronizeRangeHandlesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_SetSynchronizeRangeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronizeRangeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSynchronizeRangeHandles(temp0);
    }
    else
    {
      op->vtkRangeHandlesItem::SetSynchronizeRangeHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRangeHandlesItem_SetHandleOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRangeHandlesItem *op = static_cast<vtkRangeHandlesItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleOrientation(temp0);
    }
    else
    {
      op->vtkRangeHandlesItem::SetHandleOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRangeHandlesItem_Methods[] = {
  {"IsTypeOf", PyvtkRangeHandlesItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRangeHandlesItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRangeHandlesItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRangeHandlesItem\nC++: static vtkRangeHandlesItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRangeHandlesItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRangeHandlesItem\nC++: vtkRangeHandlesItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRangeHandlesItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRangeHandlesItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Paint", PyvtkRangeHandlesItem_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nOverridden to check that a color transfer function has been set\nbefore painting.\n"},
  {"GetBounds", PyvtkRangeHandlesItem_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: void GetBounds(double bounds[4]) override;\n\nOverridden to get the bounds from the color transfer function\nrange.\n"},
  {"GetHandlesRange", PyvtkRangeHandlesItem_GetHandlesRange, METH_VARARGS,
   "GetHandlesRange(self, range:[float, float]) -> None\nC++: void GetHandlesRange(double range[2]) override;\n\nOverridden to return the range of the color transfer function.\nUse this method by observing EndInteractionEvent\n"},
  {"SetColorTransferFunction", PyvtkRangeHandlesItem_SetColorTransferFunction, METH_VARARGS,
   "SetColorTransferFunction(self, ctf:vtkColorTransferFunction)\n    -> None\nC++: void SetColorTransferFunction(vtkColorTransferFunction *ctf)\n\nGet/set the color transfer function to interact with.\n"},
  {"GetColorTransferFunction", PyvtkRangeHandlesItem_GetColorTransferFunction, METH_VARARGS,
   "GetColorTransferFunction(self) -> vtkColorTransferFunction\nC++: virtual vtkColorTransferFunction *GetColorTransferFunction()\n\n"},
  {"ComputeHandlesDrawRange", PyvtkRangeHandlesItem_ComputeHandlesDrawRange, METH_VARARGS,
   "ComputeHandlesDrawRange(self) -> None\nC++: void ComputeHandlesDrawRange() override;\n\nCompute the handles draw range by using the handle width and the\ntransfer function.\n"},
  {"SynchronizeRangeHandlesOn", PyvtkRangeHandlesItem_SynchronizeRangeHandlesOn, METH_VARARGS,
   "SynchronizeRangeHandlesOn(self) -> None\nC++: void SynchronizeRangeHandlesOn() override;\n\nOverridden to force using desynchronized vertical handles.\nDesynchronized handles means that handles are always moved\nindependently, as opposed to synchronized handles where the left\nhandle drives the modification of the whole range. See superclass\nfor more information.\n"},
  {"SetSynchronizeRangeHandles", PyvtkRangeHandlesItem_SetSynchronizeRangeHandles, METH_VARARGS,
   "SetSynchronizeRangeHandles(self, synchronize:int) -> None\nC++: void SetSynchronizeRangeHandles(vtkTypeBool synchronize)\n    override;\n\nSet/Get whether handles move together when one of them is update.\nDefault is Off.\n"},
  {"SetHandleOrientation", PyvtkRangeHandlesItem_SetHandleOrientation, METH_VARARGS,
   "SetHandleOrientation(self, orientation:int) -> None\nC++: void SetHandleOrientation(int orientation) override;\n\nSet/Get the handles orientation in the plot.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRangeHandlesItem_Doc =
  "vtkRangeHandlesItem - item to show and control the range of a\nvtkColorTransferFunction\n\n"
  "Superclass: vtkPlotRangeHandlesItem\n\n"
  "vtkRangeHandlesItem provides range handles painting and management\n"
  "for a provided vtkColorTransferFunction. This specialization of\n"
  "vtkPlotRangeHandlesItem works in coordination with the color transfer\n"
  "function to drive the behavior of handles. Handles can only be\n"
  "dragged within the color transfer function range and are forced to be\n"
  "placed vertically with a fixed height of 1.\n\n"
  "A typical use case for this class is to observe EndInteractionEvent\n"
  "to update the color transfer function range using the handles range.\n\n"
  "@sa\n"
  "vtkControlPointsItem vtkScalarsToColorsItem\n"
  "vtkColorTransferFunctionItem\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRangeHandlesItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkRangeHandlesItem", // tp_name
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
  PyvtkRangeHandlesItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRangeHandlesItem_StaticNew()
{
  return vtkRangeHandlesItem::New();
}

PyObject *PyvtkRangeHandlesItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRangeHandlesItem_Type, PyvtkRangeHandlesItem_Methods,
    "vtkRangeHandlesItem",
 &PyvtkRangeHandlesItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPlotRangeHandlesItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRangeHandlesItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRangeHandlesItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRangeHandlesItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

