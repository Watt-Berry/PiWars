// python wrapper for vtkExtractPolyDataGeometry
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractPolyDataGeometry.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractPolyDataGeometry(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractPolyDataGeometry_ClassNew(); }


static PyObject *
PyvtkExtractPolyDataGeometry_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractPolyDataGeometry::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractPolyDataGeometry::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractPolyDataGeometry *tempr = vtkExtractPolyDataGeometry::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractPolyDataGeometry *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractPolyDataGeometry::NewInstance());

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
PyvtkExtractPolyDataGeometry_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractPolyDataGeometry::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractPolyDataGeometry::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractPolyDataGeometry::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetImplicitFunction(temp0);
    }
    else
    {
      op->vtkExtractPolyDataGeometry::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkExtractPolyDataGeometry::GetImplicitFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractInside(temp0);
    }
    else
    {
      op->vtkExtractPolyDataGeometry::SetExtractInside(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractInside() :
      op->vtkExtractPolyDataGeometry::GetExtractInside());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractInsideOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractInsideOn();
    }
    else
    {
      op->vtkExtractPolyDataGeometry::ExtractInsideOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractInsideOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractInsideOff();
    }
    else
    {
      op->vtkExtractPolyDataGeometry::ExtractInsideOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractBoundaryCells(temp0);
    }
    else
    {
      op->vtkExtractPolyDataGeometry::SetExtractBoundaryCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractBoundaryCells() :
      op->vtkExtractPolyDataGeometry::GetExtractBoundaryCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractBoundaryCellsOn();
    }
    else
    {
      op->vtkExtractPolyDataGeometry::ExtractBoundaryCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractBoundaryCellsOff();
    }
    else
    {
      op->vtkExtractPolyDataGeometry::ExtractBoundaryCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_SetPassPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPoints(temp0);
    }
    else
    {
      op->vtkExtractPolyDataGeometry::SetPassPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_GetPassPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassPoints() :
      op->vtkExtractPolyDataGeometry::GetPassPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_PassPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointsOn();
    }
    else
    {
      op->vtkExtractPolyDataGeometry::PassPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPolyDataGeometry_PassPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataGeometry *op = static_cast<vtkExtractPolyDataGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointsOff();
    }
    else
    {
      op->vtkExtractPolyDataGeometry::PassPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractPolyDataGeometry_Methods[] = {
  {"IsTypeOf", PyvtkExtractPolyDataGeometry_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractPolyDataGeometry_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractPolyDataGeometry_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractPolyDataGeometry\nC++: static vtkExtractPolyDataGeometry *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractPolyDataGeometry_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractPolyDataGeometry\nC++: vtkExtractPolyDataGeometry *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractPolyDataGeometry_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractPolyDataGeometry_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkExtractPolyDataGeometry_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the implicit\nfunction\n"},
  {"SetImplicitFunction", PyvtkExtractPolyDataGeometry_SetImplicitFunction, METH_VARARGS,
   "SetImplicitFunction(self, __a:vtkImplicitFunction) -> None\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function for inside/outside checks.\n"},
  {"GetImplicitFunction", PyvtkExtractPolyDataGeometry_GetImplicitFunction, METH_VARARGS,
   "GetImplicitFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunction()\n\n"},
  {"SetExtractInside", PyvtkExtractPolyDataGeometry_SetExtractInside, METH_VARARGS,
   "SetExtractInside(self, _arg:int) -> None\nC++: virtual void SetExtractInside(vtkTypeBool _arg)\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {"GetExtractInside", PyvtkExtractPolyDataGeometry_GetExtractInside, METH_VARARGS,
   "GetExtractInside(self) -> int\nC++: virtual vtkTypeBool GetExtractInside()\n\n"},
  {"ExtractInsideOn", PyvtkExtractPolyDataGeometry_ExtractInsideOn, METH_VARARGS,
   "ExtractInsideOn(self) -> None\nC++: virtual void ExtractInsideOn()\n\n"},
  {"ExtractInsideOff", PyvtkExtractPolyDataGeometry_ExtractInsideOff, METH_VARARGS,
   "ExtractInsideOff(self) -> None\nC++: virtual void ExtractInsideOff()\n\n"},
  {"SetExtractBoundaryCells", PyvtkExtractPolyDataGeometry_SetExtractBoundaryCells, METH_VARARGS,
   "SetExtractBoundaryCells(self, _arg:int) -> None\nC++: virtual void SetExtractBoundaryCells(vtkTypeBool _arg)\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {"GetExtractBoundaryCells", PyvtkExtractPolyDataGeometry_GetExtractBoundaryCells, METH_VARARGS,
   "GetExtractBoundaryCells(self) -> int\nC++: virtual vtkTypeBool GetExtractBoundaryCells()\n\n"},
  {"ExtractBoundaryCellsOn", PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOn, METH_VARARGS,
   "ExtractBoundaryCellsOn(self) -> None\nC++: virtual void ExtractBoundaryCellsOn()\n\n"},
  {"ExtractBoundaryCellsOff", PyvtkExtractPolyDataGeometry_ExtractBoundaryCellsOff, METH_VARARGS,
   "ExtractBoundaryCellsOff(self) -> None\nC++: virtual void ExtractBoundaryCellsOff()\n\n"},
  {"SetPassPoints", PyvtkExtractPolyDataGeometry_SetPassPoints, METH_VARARGS,
   "SetPassPoints(self, _arg:int) -> None\nC++: virtual void SetPassPoints(vtkTypeBool _arg)\n\nBoolean controls whether points are culled or simply passed\nthrough to the output.\n"},
  {"GetPassPoints", PyvtkExtractPolyDataGeometry_GetPassPoints, METH_VARARGS,
   "GetPassPoints(self) -> int\nC++: virtual vtkTypeBool GetPassPoints()\n\n"},
  {"PassPointsOn", PyvtkExtractPolyDataGeometry_PassPointsOn, METH_VARARGS,
   "PassPointsOn(self) -> None\nC++: virtual void PassPointsOn()\n\n"},
  {"PassPointsOff", PyvtkExtractPolyDataGeometry_PassPointsOff, METH_VARARGS,
   "PassPointsOff(self) -> None\nC++: virtual void PassPointsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractPolyDataGeometry_Doc =
  "vtkExtractPolyDataGeometry - extract vtkPolyData cells that lies\neither entirely inside or outside of a specified implicit function\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkExtractPolyDataGeometry extracts from its input vtkPolyData all\n"
  "cells that are either completely inside or outside of a specified\n"
  "implicit function. This filter is specialized to vtkPolyData. On\n"
  "output the filter generates vtkPolyData.\n\n"
  "To use this filter you must specify an implicit function. You must\n"
  "also specify whether to extract cells laying inside or outside of the\n"
  "implicit function. (The inside of an implicit function is the\n"
  "negative values region.) An option exists to extract cells that are\n"
  "neither inside nor outside (i.e., boundary).\n\n"
  "Note that this filter also has the option to directly pass all points\n"
  "or cull the points that do not satisfy the implicit function test.\n"
  "Passing all points is a tad faster, but then points remain that do\n"
  "not pass the test and may mess up subsequent glyphing operations and\n"
  "so on. By default points are culled.\n\n"
  "A more general version of this filter is available for arbitrary\n"
  "vtkDataSet input (see vtkExtractGeometry).\n\n"
  "@sa\n"
  "vtkExtractGeometry vtkClipPolyData vtkImplicitFunction\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractPolyDataGeometry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractPolyDataGeometry", // tp_name
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
  PyvtkExtractPolyDataGeometry_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractPolyDataGeometry_StaticNew()
{
  return vtkExtractPolyDataGeometry::New();
}

PyObject *PyvtkExtractPolyDataGeometry_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractPolyDataGeometry_Type, PyvtkExtractPolyDataGeometry_Methods,
    "vtkExtractPolyDataGeometry",
 &PyvtkExtractPolyDataGeometry_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractPolyDataGeometry(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractPolyDataGeometry_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractPolyDataGeometry", o) != 0)
  {
    Py_DECREF(o);
  }

}

