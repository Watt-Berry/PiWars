// python wrapper for vtkLabeledContourPolyDataItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLabeledContourPolyDataItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabeledContourPolyDataItem(PyObject *dict); }
extern "C" { PyObject *PyvtkLabeledContourPolyDataItem_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataItem_ClassNew
extern "C" { PyObject *PyvtkPolyDataItem_ClassNew(); }
#define DECLARED_PyvtkPolyDataItem_ClassNew
#endif

static PyObject *
PyvtkLabeledContourPolyDataItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabeledContourPolyDataItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabeledContourPolyDataItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabeledContourPolyDataItem *tempr = vtkLabeledContourPolyDataItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabeledContourPolyDataItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabeledContourPolyDataItem::NewInstance());

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
PyvtkLabeledContourPolyDataItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLabeledContourPolyDataItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLabeledContourPolyDataItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkLabeledContourPolyDataItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

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
      op->vtkLabeledContourPolyDataItem::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_SetTextProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  vtkTextPropertyCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextPropertyCollection"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperties(temp0);
    }
    else
    {
      op->vtkLabeledContourPolyDataItem::SetTextProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_GetTextProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextPropertyCollection *tempr = (ap.IsBound() ?
      op->GetTextProperties() :
      op->vtkLabeledContourPolyDataItem::GetTextProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_GetTextPropertyMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPropertyMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetTextPropertyMapping() :
      op->vtkLabeledContourPolyDataItem::GetTextPropertyMapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_SetTextPropertyMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPropertyMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetTextPropertyMapping(temp0);
    }
    else
    {
      op->vtkLabeledContourPolyDataItem::SetTextPropertyMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVisibility(temp0);
    }
    else
    {
      op->vtkLabeledContourPolyDataItem::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkLabeledContourPolyDataItem::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkLabeledContourPolyDataItem::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkLabeledContourPolyDataItem::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_SetSkipDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipDistance(temp0);
    }
    else
    {
      op->vtkLabeledContourPolyDataItem::SetSkipDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledContourPolyDataItem_GetSkipDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledContourPolyDataItem *op = static_cast<vtkLabeledContourPolyDataItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSkipDistance() :
      op->vtkLabeledContourPolyDataItem::GetSkipDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLabeledContourPolyDataItem_Methods[] = {
  {"IsTypeOf", PyvtkLabeledContourPolyDataItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabeledContourPolyDataItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabeledContourPolyDataItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLabeledContourPolyDataItem\nC++: static vtkLabeledContourPolyDataItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabeledContourPolyDataItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLabeledContourPolyDataItem\nC++: vtkLabeledContourPolyDataItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLabeledContourPolyDataItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLabeledContourPolyDataItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Paint", PyvtkLabeledContourPolyDataItem_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the item.\n"},
  {"SetTextProperty", PyvtkLabeledContourPolyDataItem_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, tprop:vtkTextProperty) -> None\nC++: virtual void SetTextProperty(vtkTextProperty *tprop)\n\nThe text property used to label the lines. Note that both\nvertical and horizontal justifications will be reset to\n\"Centered\" prior to rendering.\n\note This is a convenience method that clears TextProperties and\ninserts the argument as the only property in the collection.\n@sa SetTextProperties\n"},
  {"SetTextProperties", PyvtkLabeledContourPolyDataItem_SetTextProperties, METH_VARARGS,
   "SetTextProperties(self, coll:vtkTextPropertyCollection) -> None\nC++: virtual void SetTextProperties(\n    vtkTextPropertyCollection *coll)\n\nThe text properties used to label the lines. Note that both\nvertical and horizontal justifications will be reset to\n\"Centered\" prior to rendering.\n\n* If the TextPropertyMapping array exists, then it is used to\n  identify which\n* text property to use for each label as follows: If the scalar\n  value of a\n* line is found in the mapping, the index of the value in mapping\nis used to\n* lookup the text property in the collection. If there are more\n  mapping\n* values than properties, the properties are looped through until\nthe\n* mapping is exhausted.\n\n* Lines with scalar values missing from the mapping are assigned\n  text\n* properties in a round-robin fashion starting from the beginning\nof the\n* collection, repeating from the start of the collection as\n  necessary.\n* @sa SetTextProperty\n* @sa SetTextPropertyMapping\n"},
  {"GetTextProperties", PyvtkLabeledContourPolyDataItem_GetTextProperties, METH_VARARGS,
   "GetTextProperties(self) -> vtkTextPropertyCollection\nC++: virtual vtkTextPropertyCollection *GetTextProperties()\n\n"},
  {"GetTextPropertyMapping", PyvtkLabeledContourPolyDataItem_GetTextPropertyMapping, METH_VARARGS,
   "GetTextPropertyMapping(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetTextPropertyMapping()\n\nValues in this array correspond to vtkTextProperty objects in the\nTextProperties collection. If a contour line's scalar value\nexists in this array, the corresponding text property is used for\nthe label. See SetTextProperties for more information.\n"},
  {"SetTextPropertyMapping", PyvtkLabeledContourPolyDataItem_SetTextPropertyMapping, METH_VARARGS,
   "SetTextPropertyMapping(self, mapping:vtkDoubleArray) -> None\nC++: virtual void SetTextPropertyMapping(vtkDoubleArray *mapping)\n\n"},
  {"SetLabelVisibility", PyvtkLabeledContourPolyDataItem_SetLabelVisibility, METH_VARARGS,
   "SetLabelVisibility(self, _arg:bool) -> None\nC++: virtual void SetLabelVisibility(bool _arg)\n\nIf true, labels will be placed and drawn during rendering.\nOtherwise, only the mapper returned by GetPolyDataMapper() will\nbe rendered. The default is to draw labels.\n"},
  {"GetLabelVisibility", PyvtkLabeledContourPolyDataItem_GetLabelVisibility, METH_VARARGS,
   "GetLabelVisibility(self) -> bool\nC++: virtual bool GetLabelVisibility()\n\n"},
  {"LabelVisibilityOn", PyvtkLabeledContourPolyDataItem_LabelVisibilityOn, METH_VARARGS,
   "LabelVisibilityOn(self) -> None\nC++: virtual void LabelVisibilityOn()\n\n"},
  {"LabelVisibilityOff", PyvtkLabeledContourPolyDataItem_LabelVisibilityOff, METH_VARARGS,
   "LabelVisibilityOff(self) -> None\nC++: virtual void LabelVisibilityOff()\n\n"},
  {"SetSkipDistance", PyvtkLabeledContourPolyDataItem_SetSkipDistance, METH_VARARGS,
   "SetSkipDistance(self, _arg:float) -> None\nC++: virtual void SetSkipDistance(double _arg)\n\nEnsure that there are at least SkipDistance pixels between\nlabels. This is only enforced on labels along the same line. The\ndefault is 0.\n"},
  {"GetSkipDistance", PyvtkLabeledContourPolyDataItem_GetSkipDistance, METH_VARARGS,
   "GetSkipDistance(self) -> float\nC++: virtual double GetSkipDistance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLabeledContourPolyDataItem_Doc =
  "vtkLabeledContourPolyDataItem - Filter that translate a vtkPolyData\n2D mesh into vtkContextItems.\n\n"
  "Superclass: vtkPolyDataItem\n\n"
  "@warning\n"
  "The input vtkPolyData should be a 2D mesh.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabeledContourPolyDataItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkLabeledContourPolyDataItem", // tp_name
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
  PyvtkLabeledContourPolyDataItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabeledContourPolyDataItem_StaticNew()
{
  return vtkLabeledContourPolyDataItem::New();
}

PyObject *PyvtkLabeledContourPolyDataItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLabeledContourPolyDataItem_Type, PyvtkLabeledContourPolyDataItem_Methods,
    "vtkLabeledContourPolyDataItem",
 &PyvtkLabeledContourPolyDataItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabeledContourPolyDataItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabeledContourPolyDataItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabeledContourPolyDataItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

