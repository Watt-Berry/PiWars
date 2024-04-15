// python wrapper for vtkTriangleFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTriangleFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTriangleFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkTriangleFilter_ClassNew(); }


static PyObject *
PyvtkTriangleFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTriangleFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTriangleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTriangleFilter *tempr = vtkTriangleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTriangleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTriangleFilter::NewInstance());

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
PyvtkTriangleFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTriangleFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTriangleFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassVertsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassVertsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassVertsOn();
    }
    else
    {
      op->vtkTriangleFilter::PassVertsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassVertsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassVertsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassVertsOff();
    }
    else
    {
      op->vtkTriangleFilter::PassVertsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SetPassVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassVerts(temp0);
    }
    else
    {
      op->vtkTriangleFilter::SetPassVerts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetPassVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassVerts() :
      op->vtkTriangleFilter::GetPassVerts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassLinesOn();
    }
    else
    {
      op->vtkTriangleFilter::PassLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_PassLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassLinesOff();
    }
    else
    {
      op->vtkTriangleFilter::PassLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassLines(temp0);
    }
    else
    {
      op->vtkTriangleFilter::SetPassLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassLines() :
      op->vtkTriangleFilter::GetPassLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkTriangleFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTriangleFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTriangleFilter *op = static_cast<vtkTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkTriangleFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTriangleFilter_Methods[] = {
  {"IsTypeOf", PyvtkTriangleFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTriangleFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTriangleFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTriangleFilter\nC++: static vtkTriangleFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTriangleFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTriangleFilter\nC++: vtkTriangleFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTriangleFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTriangleFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"PassVertsOn", PyvtkTriangleFilter_PassVertsOn, METH_VARARGS,
   "PassVertsOn(self) -> None\nC++: virtual void PassVertsOn()\n\nTurn on/off passing vertices through filter (default: on). If\nthis is on, then the input vertex cells will be broken into\nindividual vertex cells (one point per cell).  If it is off, the\ninput vertex cells will be ignored.\n"},
  {"PassVertsOff", PyvtkTriangleFilter_PassVertsOff, METH_VARARGS,
   "PassVertsOff(self) -> None\nC++: virtual void PassVertsOff()\n\n"},
  {"SetPassVerts", PyvtkTriangleFilter_SetPassVerts, METH_VARARGS,
   "SetPassVerts(self, _arg:int) -> None\nC++: virtual void SetPassVerts(vtkTypeBool _arg)\n\n"},
  {"GetPassVerts", PyvtkTriangleFilter_GetPassVerts, METH_VARARGS,
   "GetPassVerts(self) -> int\nC++: virtual vtkTypeBool GetPassVerts()\n\n"},
  {"PassLinesOn", PyvtkTriangleFilter_PassLinesOn, METH_VARARGS,
   "PassLinesOn(self) -> None\nC++: virtual void PassLinesOn()\n\nTurn on/off passing lines through filter (default: on). If this\nis on, then the input polylines will be broken into line\nsegments.  If it is off, then the input lines will be ignored and\nthe output will have no lines.\n"},
  {"PassLinesOff", PyvtkTriangleFilter_PassLinesOff, METH_VARARGS,
   "PassLinesOff(self) -> None\nC++: virtual void PassLinesOff()\n\n"},
  {"SetPassLines", PyvtkTriangleFilter_SetPassLines, METH_VARARGS,
   "SetPassLines(self, _arg:int) -> None\nC++: virtual void SetPassLines(vtkTypeBool _arg)\n\n"},
  {"GetPassLines", PyvtkTriangleFilter_GetPassLines, METH_VARARGS,
   "GetPassLines(self) -> int\nC++: virtual vtkTypeBool GetPassLines()\n\n"},
  {"SetTolerance", PyvtkTriangleFilter_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nOptionally specify the polygon triangulation tolerance to use. \nThis simply passes the tolerance to the internal\nvtkPolygon::Tolerance used for triangulation of polygons.  This\nis for advanced usage, and generally does not need to be set\nunless tessellation of n-sided polygons with n>4 is required, and\nspecial accuracy requirements are needed.  Note that by default\nif a value <=0 is specified, then the default\nvtkPolygon::Tolerance is used.\n"},
  {"GetTolerance", PyvtkTriangleFilter_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTriangleFilter_Doc =
  "vtkTriangleFilter - convert input polygons and strips to triangles\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTriangleFilter generates triangles from input polygons and\n"
  "triangle strips.  It also generates line segments from polylines\n"
  "unless PassLines is off, and generates individual vertex cells from\n"
  "vtkVertex point lists unless PassVerts is off.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTriangleFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkTriangleFilter", // tp_name
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
  PyvtkTriangleFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTriangleFilter_StaticNew()
{
  return vtkTriangleFilter::New();
}

PyObject *PyvtkTriangleFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTriangleFilter_Type, PyvtkTriangleFilter_Methods,
    "vtkTriangleFilter",
 &PyvtkTriangleFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTriangleFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTriangleFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTriangleFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

