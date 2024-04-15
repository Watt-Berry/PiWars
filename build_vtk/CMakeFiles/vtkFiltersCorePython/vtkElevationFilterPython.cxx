// python wrapper for vtkElevationFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkElevationFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkElevationFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkElevationFilter_ClassNew(); }


static PyObject *
PyvtkElevationFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkElevationFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkElevationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkElevationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkElevationFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkElevationFilter *tempr = vtkElevationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkElevationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkElevationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkElevationFilter::NewInstance());

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
PyvtkElevationFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkElevationFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkElevationFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkElevationFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkElevationFilter_SetLowPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

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
      op->SetLowPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkElevationFilter::SetLowPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetLowPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLowPoint(temp0);
    }
    else
    {
      op->vtkElevationFilter::SetLowPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetLowPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkElevationFilter_SetLowPoint_s1(self, args);
    case 1:
      return PyvtkElevationFilter_SetLowPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLowPoint");
  return nullptr;
}


static PyObject *
PyvtkElevationFilter_GetLowPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLowPoint() :
      op->vtkElevationFilter::GetLowPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkElevationFilter_SetHighPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

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
      op->SetHighPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkElevationFilter::SetHighPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetHighPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetHighPoint(temp0);
    }
    else
    {
      op->vtkElevationFilter::SetHighPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetHighPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkElevationFilter_SetHighPoint_s1(self, args);
    case 1:
      return PyvtkElevationFilter_SetHighPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHighPoint");
  return nullptr;
}


static PyObject *
PyvtkElevationFilter_GetHighPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHighPoint() :
      op->vtkElevationFilter::GetHighPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkElevationFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkElevationFilter::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkElevationFilter::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkElevationFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkElevationFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkElevationFilter_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkElevationFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkElevationFilter *op = static_cast<vtkElevationFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkElevationFilter::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkElevationFilter_Methods[] = {
  {"IsTypeOf", PyvtkElevationFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkElevationFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkElevationFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkElevationFilter\nC++: static vtkElevationFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkElevationFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkElevationFilter\nC++: vtkElevationFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkElevationFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkElevationFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLowPoint", PyvtkElevationFilter_SetLowPoint, METH_VARARGS,
   "SetLowPoint(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetLowPoint(double _arg1, double _arg2,\n    double _arg3)\nSetLowPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetLowPoint(const double _arg[3])\n\nDefine one end of the line (small scalar values).  Default is\n(0,0,0).\n"},
  {"GetLowPoint", PyvtkElevationFilter_GetLowPoint, METH_VARARGS,
   "GetLowPoint(self) -> (float, float, float)\nC++: virtual double *GetLowPoint()\n\n"},
  {"SetHighPoint", PyvtkElevationFilter_SetHighPoint, METH_VARARGS,
   "SetHighPoint(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetHighPoint(double _arg1, double _arg2,\n    double _arg3)\nSetHighPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetHighPoint(const double _arg[3])\n\nDefine other end of the line (large scalar values).  Default is\n(0,0,1).\n"},
  {"GetHighPoint", PyvtkElevationFilter_GetHighPoint, METH_VARARGS,
   "GetHighPoint(self) -> (float, float, float)\nC++: virtual double *GetHighPoint()\n\n"},
  {"SetScalarRange", PyvtkElevationFilter_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSpecify range to map scalars into.  Default is [0, 1].\n"},
  {"GetScalarRange", PyvtkElevationFilter_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkElevationFilter_Doc =
  "vtkElevationFilter - generate scalars along a specified direction\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkElevationFilter is a filter to generate scalar values from a\n"
  "dataset.  The scalar values lie within a user specified range, and\n"
  "are generated by computing a projection of each dataset point onto a\n"
  "line. The line can be oriented arbitrarily. A typical example is to\n"
  "generate scalars based on elevation or height above a plane.\n\n"
  "@warning\n"
  "vtkSimpleElevationFilter may be easier to use in many cases; e.g.,\n"
  "compute vertical elevation above zero z-point.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkSimpleElevationFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkElevationFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkElevationFilter", // tp_name
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
  PyvtkElevationFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkElevationFilter_StaticNew()
{
  return vtkElevationFilter::New();
}

PyObject *PyvtkElevationFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkElevationFilter_Type, PyvtkElevationFilter_Methods,
    "vtkElevationFilter",
 &PyvtkElevationFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkElevationFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkElevationFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkElevationFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

