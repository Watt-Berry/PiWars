// python wrapper for vtkPlotArea
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPlotArea.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotArea(PyObject *dict); }
extern "C" { PyObject *PyvtkPlotArea_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif

static PyObject *
PyvtkPlotArea_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotArea::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotArea_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotArea::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotArea_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotArea *tempr = vtkPlotArea::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotArea_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotArea *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotArea::NewInstance());

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
PyvtkPlotArea_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlotArea::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotArea_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlotArea::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotArea_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlotArea::SetColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotArea_SetColor_s2(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetColor."
    " (" "Please use unambiguous SetColorF method instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlotArea::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotArea_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPlotArea_SetColor_s1(self, args);
    case 3:
      return PyvtkPlotArea_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkPlotArea_SetColorF_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetColorF(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlotArea::SetColorF(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotArea_SetColorF_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColorF(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlotArea::SetColorF(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotArea_SetColorF(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPlotArea_SetColorF_s1(self, args);
    case 3:
      return PyvtkPlotArea_SetColorF_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColorF");
  return nullptr;
}


static PyObject *
PyvtkPlotArea_GetValidPointMaskName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointMaskName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetValidPointMaskName() :
      op->vtkPlotArea::GetValidPointMaskName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotArea_SetValidPointMaskName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointMaskName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidPointMaskName(temp0);
    }
    else
    {
      op->vtkPlotArea::SetValidPointMaskName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotArea_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

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
      op->vtkPlotArea::GetBounds(temp0);
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
PyvtkPlotArea_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotArea::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotArea_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  vtkContext2D *temp0 = nullptr;
  vtkRectf *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkRectf") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->PaintLegend(temp0, *temp1, temp2) :
      op->vtkPlotArea::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotArea_GetTooltipLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  vtkVector2d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2d") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTooltipLabel(*temp0, temp1, temp2) :
      op->vtkPlotArea::GetTooltipLabel(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlotArea_UpdateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateCache() :
      op->vtkPlotArea::UpdateCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotArea_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotArea *op = static_cast<vtkPlotArea *>(vp);

  int temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputArray(temp0, temp1);
    }
    else
    {
      op->vtkPlotArea::SetInputArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotArea_Methods[] = {
  {"IsTypeOf", PyvtkPlotArea_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotArea_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotArea_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlotArea\nC++: static vtkPlotArea *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotArea_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlotArea\nC++: vtkPlotArea *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlotArea_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlotArea_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetColor", PyvtkPlotArea_SetColor, METH_VARARGS,
   "SetColor(self, r:int, g:int, b:int, a:int) -> None\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a) override;\nSetColor(self, r:float, g:float, b:float) -> None\nC++: void SetColor(double r, double g, double b) override;\n\nSet the plot color with integer values (comprised between 0 and\n255)\n"},
  {"SetColorF", PyvtkPlotArea_SetColorF, METH_VARARGS,
   "SetColorF(self, r:float, g:float, b:float, a:float) -> None\nC++: void SetColorF(double r, double g, double b, double a)\n    override;\nSetColorF(self, r:float, g:float, b:float) -> None\nC++: void SetColorF(double r, double g, double b) override;\n\nSet the plot color with floating values (comprised between 0.0\nand 1.0)\n"},
  {"GetValidPointMaskName", PyvtkPlotArea_GetValidPointMaskName, METH_VARARGS,
   "GetValidPointMaskName(self) -> str\nC++: virtual vtkStdString GetValidPointMaskName()\n\nGet/set the valid point mask array name.\n"},
  {"SetValidPointMaskName", PyvtkPlotArea_SetValidPointMaskName, METH_VARARGS,
   "SetValidPointMaskName(self, _arg:str) -> None\nC++: virtual void SetValidPointMaskName(vtkStdString _arg)\n\n"},
  {"GetBounds", PyvtkPlotArea_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: void GetBounds(double bounds[4]) override;\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n"},
  {"Paint", PyvtkPlotArea_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {"PaintLegend", PyvtkPlotArea_PaintLegend, METH_VARARGS,
   "PaintLegend(self, painter:vtkContext2D, rect:vtkRectf,\n    legendIndex:int) -> bool\nC++: bool PaintLegend(vtkContext2D *painter, const vtkRectf &rect,\n     int legendIndex) override;\n\nPaint legend event for the plot, called whenever the legend needs\nthe plot items symbol/mark/line drawn. A rect is supplied with\nthe lower left corner of the rect (elements 0 and 1) and with\nwidth x height (elements 2 and 3). The plot can choose how to\nfill the space supplied. The index is used by Plots that return\nmore than one label.\n"},
  {"GetTooltipLabel", PyvtkPlotArea_GetTooltipLabel, METH_VARARGS,
   "GetTooltipLabel(self, plotPos:vtkVector2d, seriesIndex:int,\n    segmentIndex:int) -> str\nC++: vtkStdString GetTooltipLabel(const vtkVector2d &plotPos,\n    vtkIdType seriesIndex, vtkIdType segmentIndex) override;\n\nGenerate and return the tooltip label string for this plot The\nsegmentIndex parameter is ignored, except for vtkPlotBar\n"},
  {"UpdateCache", PyvtkPlotArea_UpdateCache, METH_VARARGS,
   "UpdateCache(self) -> bool\nC++: bool UpdateCache() override;\n\nUpdate the internal cache. Returns true if cache was successfully\nupdated. Default does nothing. This method is called by Update()\nwhen either the plot's data has changed or CacheRequiresUpdate()\nreturns true. It is not necessary to call this method explicitly.\n"},
  {"SetInputArray", PyvtkPlotArea_SetInputArray, METH_VARARGS,
   "SetInputArray(self, index:int, name:str) -> None\nC++: virtual void SetInputArray(int index,\n    const vtkStdString &name)\n\nConvenience function to set the input arrays. For most plots\nindex 0 is the x axis, and index 1 is the y axis. The name is the\nname of the column in the vtkTable.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPlotArea_Doc =
  "vtkPlotArea - draws an area plot.\n\n"
  "Superclass: vtkPlot\n\n"
  "vtkPlotArea is used to render an area plot. An area plot (sometimes\n"
  "called a range plot) renders a filled region between the selected\n"
  "ymin and ymax arrays. To specify the x array and ymin/ymax arrays,\n"
  "use the SetInputArray method with array index as 0, 1, or 2,\n"
  "respectively.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlotArea_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlotArea", // tp_name
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
  PyvtkPlotArea_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotArea_StaticNew()
{
  return vtkPlotArea::New();
}

PyObject *PyvtkPlotArea_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlotArea_Type, PyvtkPlotArea_Methods,
    "vtkPlotArea",
 &PyvtkPlotArea_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPlot_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlotArea(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotArea_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotArea", o) != 0)
  {
    Py_DECREF(o);
  }

}

