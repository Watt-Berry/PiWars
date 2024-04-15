// python wrapper for vtkCategoryLegend
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkCategoryLegend.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCategoryLegend(PyObject *dict); }
extern "C" { PyObject *PyvtkCategoryLegend_ClassNew(); }

#ifndef DECLARED_PyvtkChartLegend_ClassNew
extern "C" { PyObject *PyvtkChartLegend_ClassNew(); }
#define DECLARED_PyvtkChartLegend_ClassNew
#endif

static PyObject *
PyvtkCategoryLegend_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCategoryLegend::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCategoryLegend::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCategoryLegend *tempr = vtkCategoryLegend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCategoryLegend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCategoryLegend::NewInstance());

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
PyvtkCategoryLegend_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCategoryLegend::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCategoryLegend::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkCategoryLegend::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetBoundingRect(temp0) :
      op->vtkCategoryLegend::GetBoundingRect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetScalarsToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetScalarsToColors(temp0);
    }
    else
    {
      op->vtkCategoryLegend::SetScalarsToColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetScalarsToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetScalarsToColors() :
      op->vtkCategoryLegend::GetScalarsToColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVariantArray *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkCategoryLegend::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkVariantArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
  {
    if (ap.IsBound())
    {
      op->SetValues(temp0);
    }
    else
    {
      op->vtkCategoryLegend::SetValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkCategoryLegend::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkCategoryLegend::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_GetOutlierLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlierLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutlierLabel() :
      op->vtkCategoryLegend::GetOutlierLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCategoryLegend_SetOutlierLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlierLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCategoryLegend *op = static_cast<vtkCategoryLegend *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlierLabel(temp0);
    }
    else
    {
      op->vtkCategoryLegend::SetOutlierLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCategoryLegend_Methods[] = {
  {"IsTypeOf", PyvtkCategoryLegend_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCategoryLegend_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCategoryLegend_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCategoryLegend\nC++: static vtkCategoryLegend *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCategoryLegend_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCategoryLegend\nC++: vtkCategoryLegend *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCategoryLegend_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCategoryLegend_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Paint", PyvtkCategoryLegend_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint the legend into a rectangle defined by the bounds.\n"},
  {"GetBoundingRect", PyvtkCategoryLegend_GetBoundingRect, METH_VARARGS,
   "GetBoundingRect(self, painter:vtkContext2D) -> vtkRectf\nC++: vtkRectf GetBoundingRect(vtkContext2D *painter) override;\n\nCompute and return the lower left corner of this legend, along\nwith its width and height.\n"},
  {"SetScalarsToColors", PyvtkCategoryLegend_SetScalarsToColors, METH_VARARGS,
   "SetScalarsToColors(self, stc:vtkScalarsToColors) -> None\nC++: virtual void SetScalarsToColors(vtkScalarsToColors *stc)\n\nGet/Set the vtkScalarsToColors used to draw this legend. Since\nthis legend represents categorical data, this vtkScalarsToColors\nmust have been populated using SetAnnotation().\n"},
  {"GetScalarsToColors", PyvtkCategoryLegend_GetScalarsToColors, METH_VARARGS,
   "GetScalarsToColors(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetScalarsToColors()\n\n"},
  {"GetValues", PyvtkCategoryLegend_GetValues, METH_VARARGS,
   "GetValues(self) -> vtkVariantArray\nC++: virtual vtkVariantArray *GetValues()\n\nGet/Set the array of values that will be represented by this\nlegend. This array must contain distinct annotated values from\nthe ScalarsToColors. Each value in this array will be drawn as a\nseparate entry within this legend.\n"},
  {"SetValues", PyvtkCategoryLegend_SetValues, METH_VARARGS,
   "SetValues(self, __a:vtkVariantArray) -> None\nC++: virtual void SetValues(vtkVariantArray *)\n\n"},
  {"SetTitle", PyvtkCategoryLegend_SetTitle, METH_VARARGS,
   "SetTitle(self, title:str) -> None\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the legend.\n"},
  {"GetTitle", PyvtkCategoryLegend_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual vtkStdString GetTitle()\n\n"},
  {"GetOutlierLabel", PyvtkCategoryLegend_GetOutlierLabel, METH_VARARGS,
   "GetOutlierLabel(self) -> str\nC++: virtual vtkStdString GetOutlierLabel()\n\nGet/set the label to use for outlier data.\n"},
  {"SetOutlierLabel", PyvtkCategoryLegend_SetOutlierLabel, METH_VARARGS,
   "SetOutlierLabel(self, _arg:str) -> None\nC++: virtual void SetOutlierLabel(vtkStdString _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCategoryLegend_Doc =
  "vtkCategoryLegend - Legend item to display categorical data.\n\n"
  "Superclass: vtkChartLegend\n\n"
  "vtkCategoryLegend will display a label and color patch for each value\n"
  "in a categorical data set.  To use this class, you must first\n"
  "populate a vtkScalarsToColors by using the SetAnnotation() method. \n"
  "The other input to this class is a vtkVariantArray.  This should\n"
  "contain the annotated values from the vtkScalarsToColors that you\n"
  "wish to include within the legend.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCategoryLegend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkCategoryLegend", // tp_name
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
  PyvtkCategoryLegend_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCategoryLegend_StaticNew()
{
  return vtkCategoryLegend::New();
}

PyObject *PyvtkCategoryLegend_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCategoryLegend_Type, PyvtkCategoryLegend_Methods,
    "vtkCategoryLegend",
 &PyvtkCategoryLegend_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkChartLegend_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VERTICAL", vtkCategoryLegend::VERTICAL },
        { "HORIZONTAL", vtkCategoryLegend::HORIZONTAL },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCategoryLegend(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCategoryLegend_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCategoryLegend", o) != 0)
  {
    Py_DECREF(o);
  }

}

