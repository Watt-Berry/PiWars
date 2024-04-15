// python wrapper for vtkColorTransferControlPointsItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkColorTransferControlPointsItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkColorTransferControlPointsItem(PyObject *dict); }
extern "C" { PyObject *PyvtkColorTransferControlPointsItem_ClassNew(); }

#ifndef DECLARED_PyvtkControlPointsItem_ClassNew
extern "C" { PyObject *PyvtkControlPointsItem_ClassNew(); }
#define DECLARED_PyvtkControlPointsItem_ClassNew
#endif

static PyObject *
PyvtkColorTransferControlPointsItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkColorTransferControlPointsItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorTransferControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkColorTransferControlPointsItem *tempr = vtkColorTransferControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorTransferControlPointsItem::NewInstance());

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
PyvtkColorTransferControlPointsItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkColorTransferControlPointsItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkColorTransferControlPointsItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::SetColorTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetColorTransferFunction() :
      op->vtkColorTransferControlPointsItem::GetColorTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkColorTransferControlPointsItem::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->GetControlPoint(temp0, temp1);
    }
    else
    {
      op->vtkColorTransferControlPointsItem::GetControlPoint(temp0, temp1);
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
PyvtkColorTransferControlPointsItem_SetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::SetControlPoint(temp0, temp1);
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
PyvtkColorTransferControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::AddPoint(temp0));

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
PyvtkColorTransferControlPointsItem_RemovePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      op->vtkColorTransferControlPointsItem::RemovePoint(temp0));

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
PyvtkColorTransferControlPointsItem_RemovePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkColorTransferControlPointsItem::RemovePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColorTransferControlPointsItem_RemovePoint_Methods[] = {
  {"RemovePoint", PyvtkColorTransferControlPointsItem_RemovePoint_s1, METH_VARARGS,
   "@P *d"},
  {"RemovePoint", PyvtkColorTransferControlPointsItem_RemovePoint_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColorTransferControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColorTransferControlPointsItem_RemovePoint_Methods;
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
PyvtkColorTransferControlPointsItem_SetColorFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorFill(temp0);
    }
    else
    {
      op->vtkColorTransferControlPointsItem::SetColorFill(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetColorFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorFill() :
      op->vtkColorTransferControlPointsItem::GetColorFill());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColorTransferControlPointsItem_Methods[] = {
  {"IsTypeOf", PyvtkColorTransferControlPointsItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkColorTransferControlPointsItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkColorTransferControlPointsItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkColorTransferControlPointsItem\nC++: static vtkColorTransferControlPointsItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkColorTransferControlPointsItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkColorTransferControlPointsItem\nC++: vtkColorTransferControlPointsItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkColorTransferControlPointsItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkColorTransferControlPointsItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetColorTransferFunction", PyvtkColorTransferControlPointsItem_SetColorTransferFunction, METH_VARARGS,
   "SetColorTransferFunction(self, function:vtkColorTransferFunction)\n    -> None\nC++: void SetColorTransferFunction(\n    vtkColorTransferFunction *function)\n\nSet the piecewise function to draw its points\n"},
  {"GetColorTransferFunction", PyvtkColorTransferControlPointsItem_GetColorTransferFunction, METH_VARARGS,
   "GetColorTransferFunction(self) -> vtkColorTransferFunction\nC++: virtual vtkColorTransferFunction *GetColorTransferFunction()\n\nGet the piecewise function\n"},
  {"GetNumberOfPoints", PyvtkColorTransferControlPointsItem_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nReturn the number of points in the color transfer function.\n"},
  {"GetControlPoint", PyvtkColorTransferControlPointsItem_GetControlPoint, METH_VARARGS,
   "GetControlPoint(self, index:int, point:[float, ...]) -> None\nC++: void GetControlPoint(vtkIdType index, double *point)\n    override;\n\nReturns the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index. Note:\nThe y (point[1]) is always 0.5\n"},
  {"SetControlPoint", PyvtkColorTransferControlPointsItem_SetControlPoint, METH_VARARGS,
   "SetControlPoint(self, index:int, point:[float, ...]) -> None\nC++: void SetControlPoint(vtkIdType index, double *point)\n    override;\n\nSets the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index.\nChanging the y has no effect, it will always be 0.5\n"},
  {"AddPoint", PyvtkColorTransferControlPointsItem_AddPoint, METH_VARARGS,
   "AddPoint(self, newPos:[float, ...]) -> int\nC++: vtkIdType AddPoint(double *newPos) override;\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"RemovePoint", PyvtkColorTransferControlPointsItem_RemovePoint, METH_VARARGS,
   "RemovePoint(self, pos:[float, ...]) -> int\nC++: vtkIdType RemovePoint(double *pos) override;\nRemovePoint(self, pointId:int) -> int\nC++: vtkIdType RemovePoint(vtkIdType pointId)\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"SetColorFill", PyvtkColorTransferControlPointsItem_SetColorFill, METH_VARARGS,
   "SetColorFill(self, _arg:bool) -> None\nC++: virtual void SetColorFill(bool _arg)\n\nIf ColorFill is true, the control point brush color is set with\nthe matching color in the color transfer function. False by\ndefault.\n"},
  {"GetColorFill", PyvtkColorTransferControlPointsItem_GetColorFill, METH_VARARGS,
   "GetColorFill(self) -> bool\nC++: virtual bool GetColorFill()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkColorTransferControlPointsItem_Doc =
  "vtkColorTransferControlPointsItem - Control points for\nvtkColorTransferFunction.\n\n"
  "Superclass: vtkControlPointsItem\n\n"
  "vtkColorTransferControlPointsItem draws the control points of a\n"
  "vtkColorTransferFunction.\n"
  "@sa\n"
  "vtkControlPointsItem vtkColorTransferFunctionItem\n"
  "vtkCompositeTransferFunctionItem\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColorTransferControlPointsItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkColorTransferControlPointsItem", // tp_name
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
  PyvtkColorTransferControlPointsItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkColorTransferControlPointsItem_StaticNew()
{
  return vtkColorTransferControlPointsItem::New();
}

PyObject *PyvtkColorTransferControlPointsItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkColorTransferControlPointsItem_Type, PyvtkColorTransferControlPointsItem_Methods,
    "vtkColorTransferControlPointsItem",
 &PyvtkColorTransferControlPointsItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkControlPointsItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkColorTransferControlPointsItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkColorTransferControlPointsItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkColorTransferControlPointsItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

