// python wrapper for vtkPlotSurface
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
#include "vtkPlotSurface.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotSurface(PyObject *dict); }
extern "C" { PyObject *PyvtkPlotSurface_ClassNew(); }

#ifndef DECLARED_PyvtkPlot3D_ClassNew
extern "C" { PyObject *PyvtkPlot3D_ClassNew(); }
#define DECLARED_PyvtkPlot3D_ClassNew
#endif

static PyObject *
PyvtkPlotSurface_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotSurface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotSurface_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotSurface *tempr = vtkPlotSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotSurface::NewInstance());

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
PyvtkPlotSurface_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlotSurface::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotSurface_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlotSurface::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotSurface_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotSurface::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotSurface_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkPlotSurface::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotSurface_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkTable *temp0 = nullptr;
  vtkStdString temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlotSurface::SetInputData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotSurface_SetInputData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkTable *temp0 = nullptr;
  vtkStdString temp1;
  vtkStdString temp2;
  vtkStdString temp3;
  vtkStdString temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPlotSurface::SetInputData(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotSurface_SetInputData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  vtkTable *temp0 = nullptr;
  long long temp1;
  long long temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlotSurface::SetInputData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotSurface_SetInputData_Methods[] = {
  {"SetInputData", PyvtkPlotSurface_SetInputData_s2, METH_VARARGS,
   "@Vsss *vtkTable"},
  {"SetInputData", PyvtkPlotSurface_SetInputData_s4, METH_VARARGS,
   "@Vkkk *vtkTable"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPlotSurface_SetInputData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotSurface_SetInputData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlotSurface_SetInputData_s1(self, args);
    case 5:
      return PyvtkPlotSurface_SetInputData_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}


static PyObject *
PyvtkPlotSurface_SetXRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetXRange(temp0, temp1);
    }
    else
    {
      op->vtkPlotSurface::SetXRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotSurface_SetYRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotSurface *op = static_cast<vtkPlotSurface *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetYRange(temp0, temp1);
    }
    else
    {
      op->vtkPlotSurface::SetYRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotSurface_Methods[] = {
  {"IsTypeOf", PyvtkPlotSurface_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotSurface_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotSurface_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlotSurface\nC++: static vtkPlotSurface *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotSurface_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlotSurface\nC++: vtkPlotSurface *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlotSurface_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlotSurface_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Paint", PyvtkPlotSurface_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {"SetInputData", PyvtkPlotSurface_SetInputData, METH_VARARGS,
   "SetInputData(self, input:vtkTable) -> None\nC++: void SetInputData(vtkTable *input) override;\nSetInputData(self, input:vtkTable, xName:str, yName:str,\n    zName:str) -> None\nC++: void SetInputData(vtkTable *input, const vtkStdString &xName,\n     const vtkStdString &yName, const vtkStdString &zName)\n    override;\nSetInputData(self, input:vtkTable, xName:str, yName:str,\n    zName:str, colorName:str) -> None\nC++: void SetInputData(vtkTable *input, const vtkStdString &xName,\n     const vtkStdString &yName, const vtkStdString &zName,\n    const vtkStdString &colorName) override;\nSetInputData(self, input:vtkTable, xColumn:int, yColumn:int,\n    zColumn:int) -> None\nC++: void SetInputData(vtkTable *input, vtkIdType xColumn,\n    vtkIdType yColumn, vtkIdType zColumn) override;\n\nSet the input to the surface plot.\n"},
  {"SetXRange", PyvtkPlotSurface_SetXRange, METH_VARARGS,
   "SetXRange(self, min:float, max:float) -> None\nC++: void SetXRange(float min, float max)\n\nSet the range of the input data for the X dimension.  By default\nit is (1, NumberOfColumns).  Calling this method after\nSetInputData() results in recomputation of the plot's data. \nTherefore, it is more efficient to call it before SetInputData()\nwhen possible.\n"},
  {"SetYRange", PyvtkPlotSurface_SetYRange, METH_VARARGS,
   "SetYRange(self, min:float, max:float) -> None\nC++: void SetYRange(float min, float max)\n\nSet the range of the input data for the Y dimension.  By default\nit is (1, NumberOfRows).  Calling this method after\nSetInputData() results in recomputation of the plot's data. \nTherefore, it is more efficient to call it before SetInputData()\nwhen possible.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPlotSurface_Doc =
  "vtkPlotSurface - 3D surface plot.\n\n"
  "Superclass: vtkPlot3D\n\n"
  "3D surface plot.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlotSurface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlotSurface", // tp_name
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
  PyvtkPlotSurface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotSurface_StaticNew()
{
  return vtkPlotSurface::New();
}

PyObject *PyvtkPlotSurface_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlotSurface_Type, PyvtkPlotSurface_Methods,
    "vtkPlotSurface",
 &PyvtkPlotSurface_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPlot3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlotSurface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotSurface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotSurface", o) != 0)
  {
    Py_DECREF(o);
  }

}

